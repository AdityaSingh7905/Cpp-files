#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isFair(vector<int> &v)
{
    int odd = 0, even = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
            even += v[i];
        else
            odd += v[i];
    }
    if (odd == even)
        return true;
    return false;
}

int main()
{
    int n;
    cout << "Entre the size of the array: ";
    cin >> n;
    vector<int> v(n, 0);
    cout << "Enter the values in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> vec = v;
        vec.erase(vec.begin() + i);
        if (isFair(vec))
            cnt++;
    }
    cout << "No. of indices, after removal of which array becomes fair: " << cnt << endl;
}