#include <iostream>
#include <vector>
#include <unordered_map>
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
    int k;
    cout << "Enter the value of the key: ";
    cin >> k;
    int sum = 0, cnt = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        int rem = sum - k;
        if (mp.find(rem) != mp.end())
        {
            cnt += mp[rem];
        }
        mp[sum]++;
    }
    cout << "Number of subArrays with sum equal to k is : " << cnt << endl;
}