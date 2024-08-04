// Maximun Subarray Sum using Kadane's Algorithm
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Bruteforce
    /* int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            cout<<"Sum is: "<<sum<<endl;
            if (sum > ans)
            {
                ans = sum;
            }
        }
    }
    cout << "Maximum SubArray Sum is: " << ans << endl; */

    // Using Kadane's Algorithm
    int ans = INT_MIN;
    int sum = 0;
    int ansStart = -1, ansEnd = -1, start = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += v[i];
        if (ans < sum)
        {
            ans = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
            sum = 0;
    }
    cout << "Maximum SubArray Sum is: " << ans << endl;
    cout << "Printing subArray with maximum sum: ";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << v[i] << "\t";
    }
}