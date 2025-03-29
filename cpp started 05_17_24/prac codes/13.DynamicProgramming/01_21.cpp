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
// guess number higher or lower(leet:375)
int solveUsingRecursion(int start, int end)
{
    if (start >= end)
        return 0;
    int ans = INT_MAX;
    for (int i = start; i <= end; i++)
    {
        ans = min(ans, i + max(solveUsingRecursion(start, i - 1), solveUsingRecursion(i + 1, end)));
    }
    return ans;
}
int solveUsingMemoization(int start, int end, vector<vector<int>> &dp)
{
    if (start >= end)
        return 0;
    if (dp[start][end] != -1)
        return dp[start][end];
    int ans = INT_MAX;
    for (int i = start; i <= end; i++)
    {
        ans = min(ans, i + max(solveUsingMemoization(start, i - 1, dp), solveUsingMemoization(i + 1, end, dp)));
    }
    dp[start][end] = ans;
    return dp[start][end];
}
int solveUsingTabulation(int n)
{
    vector<vector<int>> dp(n + 2, vector<int>(n + 1, 0));
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                continue;
            }
            int ans = INT_MAX;
            for (int x = i; x <= j; x++)
            {
                ans = min(ans, x + max(dp[i][x - 1], dp[x + 1][j]));
            }
            dp[i][j] = ans;
        }
    }
    return dp[1][n];
}
int getMoneyAmount(int n)
{
    int start = 1;
    int end = n;
    // vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    int ans = solveUsingTabulation(n);
    return ans;
}
int main()
{
    return 0;
}