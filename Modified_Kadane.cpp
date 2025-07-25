#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {5, -1, -1, -1, 5};

    int n = nums.size();

    // finding maximum subarray sum with atmost k deletions
    int k = 3; // lets compute for k = 2 first

    vector<vector<int>>
        dp(k + 1, vector<int>(n, 0));

    int maxSum = nums[0];

    // first computing maximum subarray sum using Kadane's Algorithm
    dp[0][0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        dp[0][i] = max(dp[0][i - 1] + nums[i], nums[i]);
        maxSum = max(maxSum, dp[0][i]);
    }

    // now computing for the rest array
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j < n; j++)
        {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i][j - 1] + nums[j]);
            maxSum = max(maxSum, dp[i][j]);
        }
    }

    cout << "Maximum Subarray Sum with atmost " << k << " deletions: " << maxSum << endl;
}