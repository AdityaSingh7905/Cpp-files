#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> seg;

void buildSegTree(int i, int l, int r, vector<int> &nums)
{
    if (l == r)
    {
        seg[i] = nums[l];
        return;
    }

    int mid = l + (r - l) / 2;
    buildSegTree(2 * i + 1, l, mid, nums);
    buildSegTree(2 * i + 2, mid + 1, r, nums);
    seg[i] = seg[2 * i + 1] + seg[2 * i + 2];

    // for maximum minimum, just little change
    // seg[i] = max(seg[2 * i + 1], seg[2 * i + 2]);
    // seg[i] = min(seg[2 * i + 1], seg[2 * i + 2]);
}

void updateSegTree(int ind, int val, int i, int l, int r)
{
    if (l == r)
    {
        seg[i] = val;
        return;
    }

    int mid = l + (r - l) / 2;
    if (ind <= mid)
    {
        // humko left side jana hai
        updateSegTree(ind, val, 2 * i + 1, l, mid);
    }
    else
    {
        updateSegTree(ind, val, 2 * i + 2, mid + 1, r);
    }

    seg[i] = seg[2 * i + 1] + seg[2 * i + 2];
}

int findQuery(int start, int end, int i, int l, int r)
{
    if (end < l || start > r)
    {
        return 0;
    }

    if (l >= start && r <= end)
    {
        return seg[i];
    }

    int mid = l + (r - l) / 2;
    return findQuery(start, end, 2 * i + 1, l, mid) +
           findQuery(start, end, 2 * i + 2, mid + 1, r);
}

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // resizing segment tree
    seg.resize(4 * n, 0);

    buildSegTree(0, 0, n - 1, nums);

    while (true)
    {
        int a;
        cout << "Enter 1 for updation and 2 for finding any query and 0 for exit: " << endl;
        cin >> a;

        int u;
        int val;
        if (a == 1)
        {
            cout << "Enter the index where u want to update or change: " << endl;
            cin >> u;
            if (u < 0 || u >= n)
            {
                cout << "Please enter a valid index!!";
            }
            else
            {
                cout << "Enter the value with whom u want to update: " << endl;
                cin >> val;

                updateSegTree(u, val, 0, 0, n - 1);

                cout << "Updated successfully!!" << endl;
            }
        }
        else if (a == 2)
        {
            int start;
            int end;
            cout << "Please enter the valid range for which u want to find sum." << endl;
            cout << "Enter the starting index: " << endl;
            cin >> start;
            if (start < 0 || start >= n)
            {
                cout << "Enter a valid index..." << endl;
            }
            else
            {
                cout << "Enter the ending index: " << endl;
                cin >> end;

                if (end < 0 || end >= n)
                {
                    cout << "Enter a valid index..." << endl;
                }
                else
                {
                    cout << "Range Sum is: " << findQuery(start, end, 0, 0, n - 1) << endl;
                }
            }
        }
        else if (a == 0)
        {
            break;
        }
        else
        {
            cout << "Please enter a valid value. Either 1 or 2." << endl;
        }
    }
}