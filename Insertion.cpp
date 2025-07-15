#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 2, 5, 1, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Insertion Sort
    // It is similar to placing a card in pack of cards
    // such that all the cards in sorted fashion

    // Inplace sorting
    // Stable sorting that is relative order of equal elements are maintained
    // Time Complexity: O(n2)
    // Space complexity: O(1) constant

    // Dry Run
    // 3 | 2 5 1 4
    // 2 3 | 5 1 4
    // 2 3 5 | 1 4
    // 1 2 3 5 | 4
    // 1 2 3 4 5 | 
    // sorted array

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        j += 1;
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}