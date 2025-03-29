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
// space optimization in leet375
// space optimization is not possible in this code

////Minimum cost tree from leaf values(Leet:1130)
int solveUsingRecursion(vector<int>& arr, map<pair<int, int>, int>& maxi,
                            int s, int e) {
        int n = arr.size();
        if (s > e)
            return 0;
        // if there is only one element, it is a leaf node so there will be no
        // non leaf node ans for the given
        if (s == e)
            return 0;
        int ans = INT_MAX;
        for (int i = s; i < e; i++) {
            // i is here for partition
            ans = min(ans, (maxi[{s, i}] * maxi[{i + 1, e}]) +
                               solveUsingRecursion(arr, maxi, s, i) +
                               solveUsingRecursion(arr, maxi, i + 1, e));
        }
        return ans;
    }
    int solveUsingTopDown(vector<int>& arr, map<pair<int, int>, int>& maxi,
                          int s, int e, vector<vector<int>>& dp) {
        int n = arr.size();
        if (s > e)
            return 0;
        // if there is only one element, it is a leaf node so there will be no
        // non leaf node ans for the given
        if (s == e)
            return 0;
        if (dp[s][e] != -1)
            return dp[s][e];
        int ans = INT_MAX;
        for (int i = s; i < e; i++) {
            // i is here for partition
            ans = min(ans, (maxi[{s, i}] * maxi[{i + 1, e}]) +
                               solveUsingTopDown(arr, maxi, s, i, dp) +
                               solveUsingTopDown(arr, maxi, i + 1, e, dp));
        }
        dp[s][e] = ans;
        return ans;
    }
    int solveUsingTabulation(vector<int>& arr, map<pair<int, int>, int> maxi) {
        int n = arr.size();
        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));
        for (int start = n; start >= 0; start--) {
            for (int end = 0; end <= n-1; end++) {
                if(start>=end)continue;
                int ans = INT_MAX;
                for (int i = start; i < end; i++) {
                    // i is here for partition
                    ans = min(ans, (maxi[{start, i}] * maxi[{i + 1, end}]) +
                                       dp[start][i] + dp[i + 1][end]);
                }
                dp[start][end] = ans;
            }
        }
        return dp[0][n-1];
    }
    int mctFromLeafValues(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        map<pair<int, int>, int> maxi;
        for (int i = 0; i < arr.size(); i++) {
            maxi[{i, i}] = arr[i];
            for (int j = i + 1; j < arr.size(); j++) {
                maxi[{i, j}] = max(arr[j], maxi[{i, j - 1}]);
            }
        }
        int start = 0;
        int end = arr.size() - 1;
        int ans = solveUsingTabulation(arr, maxi);
        return ans;
    }
int main()
{
    return 0;
}