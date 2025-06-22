#include <iostream>
#include <vector>
using namespace std;

class Segment
{
    vector<int> sg;

public:
    Segment(int n)
    {
        sg.resize(4 * n, 0);
    }

    void buildSegment(int i, int l, int r, vector<int> &nums)
    {
        if (l == r)
        {
            sg[i] = nums[l];
            return;
        }
        int mid = l + (r - l) / 2;
        buildSegment(2 * i + 1, l, mid, nums);
        buildSegment(2 * i + 2, mid + 1, r, nums);
        sg[i] = sg[2 * i + 1] + sg[2 * i + 2];
    }

    void updateSegment(int idx, int val, int i, int l, int r, vector<int> &nums)
    {

        if (l == r)
        {
            sg[i] = val;
        }
        int mid = l + (r - l) / 2;
        if (idx <= mid)
        {
            updateSegment(idx, val, i, l, mid, nums);
        }
        else
        {
            updateSegment(idx, val, i, mid + 1, r, nums);
        }
        sg[i] = sg[2 * i + 1] + sg[2 * i + 2];
    }

    int querySegment(int start, int end, int i, int l, int r)
    {
        if (end < l || start > r)
        {
            return 0;
        }

        if (start >= l && end <= r)
        {
            return sg[i];
        }

        int mid = l + (r - l) / 2;
        return querySegment(start, end, 2 * i + 1, l, mid) + querySegment(start, end, 2 * i + 2, mid + 1, r);
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element of the array: ";
        int num;
        cin >> num;
        nums[i] = num;
    }
    
}