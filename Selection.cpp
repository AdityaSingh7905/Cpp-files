#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {3, 5, 4, 2, 6, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Selection sort : what we do is we find the smallest element of the array
    // replace it with the element at the 0th index
    // then find the second smallest element of the array
    // replace it with the element at the 1st index and so on.

    // In place sorting
    // Not stable sorting bcoz relative ordering may get change
    // Time complexity: O(n2);
    // Space complexity: O(1);

    // Dry run
    // 1st iteration
    // 3, 5, 4, 2, 6, 1
    // 1 is the smallest element, replace it with 3
    // 1, 5, 4, 2, 6, 3

    // 2nd iteration
    // 2 is the second smallest element, replace it with element at the 1st index
    // 1, 2, 4, 5, 6, 3

    // 3rd iteration
    // 3 is the third smallest element, replace it with element at the 2nd index
    // 1, 2, 3, 5, 6, 4

    // 4th iteration
    // now, 4 is the next smallest element, replace it with element at 3rd index
    // 1, 2, 3, 4, 6, 5

    // 5th iteration
    // 5 is the next smallest element, replace it with element at 4th index
    // 1, 2, 3, 4, 5, 6

    for (int i = 0; i < n - 1; i++)
    {
        int idx = i;
        for (int j = i; j < n; j++)
        {
            if (arr[idx] > arr[j])
            {
                idx = j;
            }
        }
        swap(arr[idx], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}