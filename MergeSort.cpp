#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums, int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = 0;
    vector<int> temp(r - l + 1);

    while (i <= mid && j <= r)
    {
        if (nums[i] <= nums[j])
        {
            temp[k++] = nums[i++];
        }
        else
        {
            temp[k++] = nums[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = nums[i++];
    }

    while (j <= r)
    {
        temp[k++] = nums[j++];
    }

    for (int i = l; i <= r; i++)
    {
        nums[i] = temp[i - l];
    }
}

void mergeSort(vector<int> &nums, int l, int r)
{
    if (l == r)
    {
        return; // single element is already sorted
    }
    int mid = l + (r - l) / 2;
    mergeSort(nums, l, mid);
    mergeSort(nums, mid + 1, r);
    merge(nums, l, mid, r);
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

    mergeSort(nums, 0, n - 1);

    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << "\t";
    }
}