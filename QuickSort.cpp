#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        // Searching for the larger element
        while (i < high && nums[i] <= pivot)
        {
            i++;
        }

        // Searching for the smaller of equal to pivot element
        while (j > low && nums[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[low], nums[j]);
    return j;
}

void quickSort(vector<int> &nums, int l, int r)
{
    if (l >= r)
    {
        return; // single element is already sorted
    }

    int partitionInd = partition(nums, l, r);
    quickSort(nums, l, partitionInd - 1);
    quickSort(nums, partitionInd + 1, r);
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    quickSort(nums, 0, n - 1);

    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << "\t";
    }
}