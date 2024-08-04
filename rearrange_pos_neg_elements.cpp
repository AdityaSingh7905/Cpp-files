#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v)
{   
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // rearrange positive and negative elements(necessarily not equal)
    // in alternate fashion starting with
    // positive numbers and put the leftover elements in the last

    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
            neg++;
        else
            pos++;
    }

    if (neg < pos)
        pos = neg;
    else
        neg = pos;

    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;

    print(nums);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0 && pos != 0)
        {
            ans[posIndex] = nums[i];
            posIndex += 2;
            pos--;
        }
        else if (nums[i] < 0 && neg != 0)
        {
            ans[negIndex] = nums[i];
            negIndex += 2;
            neg--;
        }
        else
            ans[i] = nums[i];
    }

    print(ans);
}