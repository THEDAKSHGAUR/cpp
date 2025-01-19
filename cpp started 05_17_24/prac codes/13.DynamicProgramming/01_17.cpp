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
// doing space optimization in leet 1143
int spaceOptimizedSubsequence(string a, string b)
{
    // vector<vector<int>>dp(a.length()+1,vector<int>(b.length()+1,0));
    // for(int i=a.length()-1;i>=0;i--){
    //     for(int j=b.length()-1;j>=0;j--){
    //         int ans=0;
    //     if(a[i]==b[j]){
    //         dp[i][j]=1+dp[i+1][j+1];
    //     }
    //     else{
    //         dp[i][j]=0+max(dp[i+1][j],dp[i][j+1]);
    //         }
    //     }
    // }
    // return dp[0][0];
    vector<int> curr(a.length() + 1, 0);
    vector<int> next(a.length() + 1, 0);
    for (int j = b.length() - 1; j >= 0; j--)
    {
        for (int i = a.length() - 1; i >= 0; i--)
        {
            int ans = 0;
            if (a[i] == b[j])
            {
                ans = 1 + next[i + 1]; // you have directly written i+1 instead of j+1 because next is already the next col
            }
            else
            {
                ans = 0 + max(next[i], curr[i + 1]);
            }
            curr[i] = ans;
        }
        next = curr;
    }
    return next[0];
}
// longest palindromic subsequence(Leet:516)
int longestPalindromeSubseq(string s)
{
    string b = s;
    reverse(b.begin(), b.end());
    vector<int> curr(s.length() + 1, 0);
    vector<int> next(s.length() + 1, 0);
    for (int j = b.length() - 1; j >= 0; j--)
    {
        for (int i = s.length() - 1; i >= 0; i--)
        {
            int ans = 0;
            if (s[i] == b[j])
            {
                ans = 1 + next[i + 1]; // you have directly written i+1 instead of j+1 because next is already the next col
            }
            else
            {
                ans = 0 + max(next[i], curr[i + 1]);
            }
            curr[i] = ans;
        }
        next = curr;
    }
    return next[0];
}

// Edit distance(leet:72)
int solvingUsingRecursion(string a, string b, int i, int j)
{
    if (i >= a.length())
    {
        return b.length() - j;
    }
    if (j >= b.length())
    {
        return a.length() - i;
    }
    int ans = 0;
    if (a[i] == b[j])
    {
        ans = 0 + solvingUsingRecursion(a, b, i + 1, j + 1);
    }
    else
    {
        int remove = 1 + solvingUsingRecursion(a, b, i, j + 1);
        int insert = 1 + solvingUsingRecursion(a, b, i + 1, j);
        int replace = 1 + solvingUsingRecursion(a, b, i + 1, j + 1);
        ans = min(remove, min(insert, replace));
    }
    return ans;
}
int solvingUsingTopDown(string a, string b, int i, int j, vector<vector<int>> &dp)
{
    if (i >= a.length())
    {
        return b.length() - j;
    }
    if (j >= b.length())
    {
        return a.length() - i;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = 0;
    if (a[i] == b[j])
    {
        dp[i][j] = 0 + solvingUsingTopDown(a, b, i + 1, j + 1, dp);
    }
    else
    {
        int remove = 1 + solvingUsingTopDown(a, b, i, j + 1, dp);
        int insert = 1 + solvingUsingTopDown(a, b, i + 1, j, dp);
        int replace = 1 + solvingUsingTopDown(a, b, i + 1, j + 1, dp);
        dp[i][j] = min(remove, min(insert, replace));
    }
    return dp[i][j];
}
int solvingUsingTab(string a, string b)
{
    int alen = a.length();
    int blen = b.length();
    vector<vector<int>> dp(alen + 1, vector<int>(blen + 1, -1));
    for (int col = 0; col <= blen; col++)
    {
        dp[alen][col] = blen - col;
    }
    for (int row = 0; row <= alen; row++)
    {
        dp[row][blen] = alen - row;
    }
    for (int i = alen - 1; i >= 0; i--)
    {
        for (int j = blen - 1; j >= 0; j--)
        {
            int ans = 0;
            if (a[i] == b[j])
            {
                dp[i][j] = 0 + dp[i + 1][j + 1];
            }
            else
            {
                int remove = 1 + dp[i][j + 1];
                int insert = 1 + dp[i + 1][j];
                int replace = 1 + dp[i + 1][j + 1];
                dp[i][j] = min(remove, min(insert, replace));
            }
        }
    }
    return dp[0][0];
}
int OptimizationOfSolution(string a, string b)
{
    int alen = a.length();
    int blen = b.length();
    vector<int> next(alen + 1, 0);
    vector<int> curr(alen + 1, 0);
    for (int row = 0; row <= alen; row++)
    {
        next[row] = alen - row;
    }
    for (int j = blen - 1; j >= 0; j--)
    {
        /// important line
        curr[alen] = blen - j;
        for (int i = alen - 1; i >= 0; i--)
        {
            int ans = 0;
            if (a[i] == b[j])
            {
                ans = 0 + next[i + 1];
            }
            else
            {
                int remove = 1 + next[i];
                int insert = 1 + curr[i + 1];
                int replace = 1 + next[i + 1];
                ans = min(remove, min(insert, replace));
            }
            curr[i] = ans;
        }
        next = curr;
    }
    return next[0];
}
int minDistance(string word1, string word2)
{
    // int i=0;
    // int j=0;
    // vector<vector<int>>dp(word1.length()+1,vector<int>(word2.length(),-1));
    int ans = OptimizationOfSolution(word1, word2);
    return ans;
}
int main()
{
    return 0;
}