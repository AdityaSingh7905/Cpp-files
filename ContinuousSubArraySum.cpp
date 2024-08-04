#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n, key;
    bool ans;
    unordered_map<int, int> mp;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter the value of the key: ";
    cin >> key;

    // Brute Force Method

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += v[j];
    //         if (j - i + 1 >= 2 && sum % key == 0)
    //         {
    //             ans = true;
    //             break;
    //         }
    //     }
    // }

    // Using algo...

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum % key == 0 && i > 0)
            ans = true;
        int rem = sum % key;
        if (mp.find(rem) != mp.end())
        {
            if (i - mp[rem] > 1)
            {
                ans = true;
                break;
            }
        }
        else
        {
            mp[rem] = i;
        }
    }
    if (ans)
    {
        cout << "The given array has a good subArray." << endl;
    }
    else
    {
        cout << "The given array hasn't a good subArray." << endl;
    }
}