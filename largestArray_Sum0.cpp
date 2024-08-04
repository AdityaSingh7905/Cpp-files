#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool sum0(vector<int> &v, int s, int e)
{
    int sum = 0;
    for (int i = s; i <= e; i++)
    {
        sum += v[i];
    }
    if (sum == 0)
        return true;
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the values in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Brute force method
    // int ans = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(sum0(v,i,j)){
    //             ans = max(ans,j-i+1);
    //         }
    //     }
    // }

    // Using method similar to Kadane's Algorithm
    int ans = 0;
    int sum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == 0)
        {
            ans = i + 1;
        }
        else if (mp.find(sum) != mp.end())
        {
            ans = max(ans, i - mp[sum]);
        }
        else
        {
            mp[sum] = i;
        }
    }
    cout << "length of the largest subArray with sum 0: " << ans << endl;
}