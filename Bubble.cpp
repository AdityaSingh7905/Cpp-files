#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {6, 5, 4, 3, 2, 1};

    // Bubble Sort
    // In place sorting
    // Stable sorting that is relative ordering of elements are maintained
    // Time complexity : O(n2)
    // Space complexity : O(1);

    // Ist iterartion
    // 1, 5, 4, 2, 6, 3
    // 1, 5, 4, 2, 6, 3
    // 1, 4, 5, 2, 6, 3
    // 1, 4, 2, 5, 6, 3
    // 1, 4, 2, 5, 3, 6 // 6 is in its correct position

    // 2nd iteration
    // 1, 4, 2, 5, 3, 6
    // 1, 2, 4, 5, 3, 6
    // 1, 2, 4, 5, 3, 6
    // 1, 2, 4, 3, 5, 6

    // 3rd iteration
    // 1, 2, 4, 3, 5, 6
    // 1, 2, 4, 3, 5, 6
    // 1, 2, 3, 4, 5, 6

    // 4th iteration
    // 1, 2, 3, 4, 5, 6
    // early break because elements are sorted

    int n = arr.size();
    // if the array is already sorted then after one loop break;

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        cout << i << " iteration" << endl;
        if (!flag)
        {
            break;
        }
    }

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}