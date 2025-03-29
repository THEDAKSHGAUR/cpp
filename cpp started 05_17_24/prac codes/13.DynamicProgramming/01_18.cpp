#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
using namespace std;
// Longest increasing subsequence(leet: 300)
int solvedUsingRecursion(vector<int> &nums, int curr, int prev)
{
    if (curr >= nums.size())
    {
        return 0;
    }
    int include = 0;
    if (prev == -1 || nums[curr] > nums[prev])
    {
        include = 1 + solvedUsingRecursion(nums, curr + 1, curr);
    }
    int exclude = 0 + solvedUsingRecursion(nums, curr + 1, prev);
    int ans = max(include, exclude);
    return ans;
}
int solvingUsingTopDown(vector<int> &nums, int curr, int prev, vector<vector<int>> &dp)
{
    if (curr >= nums.size())
    {
        return 0;
    }
    if (dp[curr][prev + 1] != -1)
        return dp[curr][prev + 1];
    int include = 0;
    if (prev == -1 || nums[curr] > nums[prev])
    {
        include = 1 + solvingUsingTopDown(nums, curr + 1, curr, dp);
    }
    int exclude = 0 + solvingUsingTopDown(nums, curr + 1, prev, dp);
    dp[curr][prev + 1] = max(include, exclude);
    return dp[curr][prev + 1];
}
int solveUsingTab(vector<int> &nums)
{
    vector<vector<int>> dp(nums.size() + 1, vector<int>(nums.size() + 1, 0));
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= -1; j--)
        {
            int include = 0;
            if (j == -1 || nums[i] > nums[j])
            {
                include = 1 + dp[i + 1][i + 1];
            }
            int exclude = 0 + dp[i + 1][j + 1];
            dp[i][j + 1] = max(include, exclude);
        }
    }
    return dp[0][0];
}
int OptimizedSolution(vector<int> &nums)
{
    vector<int> curr(nums.size() + 1, -1);
    vector<int> next(nums.size() + 1, 0);
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= -1; j--)
        {
            int include = 0;
            if (j == -1 || nums[i] > nums[j])
            {
                include = 1 + next[i + 1];
            }
            int exclude = 0 + next[j + 1];
            curr[j + 1] = max(include, exclude);
        }
        next = curr;
    }
    return next[0];
}
int lengthOfLIS(vector<int> &nums)
{
    // vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
    // int curr=0;
    // int prev=-1;
    int ans = solveUsingTab(nums);
    return ans;
}
int main()
{
    return 0;
}