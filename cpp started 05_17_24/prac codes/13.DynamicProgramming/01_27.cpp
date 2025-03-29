#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<limits.h>
#include<numeric>
#include<stack>
#include<queue>
#include<map>
using namespace std;
//No. of dice rolls with target sum
 long long int MOD = 1000000007;
    int solveUsingRecursion(int n, int k, int target) {
        if (target == 0 && n == 0)
            return 1;
        if (target == 0 && n != 0)
            return 0;
        if (target != 0 && n == 0)
            return 0;
        int ans = 0;
        for (int i = 1; i <= k; i++) {
            ans += solveUsingRecursion(n - 1, k, target - i);
        }
        return ans;
    }
    int solveUsingTopDown(int n, int k, int target, vector<vector<int>>& dp) {
        // if (target == 0 && n == 0)
        //     return 1;
        // if (target == 0 && n != 0)
        //     return 0;
        // if (target != 0 && n == 0)
        //     return 0;
        // if (dp[n][target] != -1)
        //     return dp[n][target];
        // int ans = 0;
        // for (int i = 1; i <= k; i++) {
        //     if (target - i >= 0) {
        //         int rec = solveUsingTopDown(n - 1, k, target - i, dp) % MOD;
        //         ans = (ans % MOD + rec % MOD) % MOD;
        //     }
        // }
        // dp[n][target] = ans;
        // return dp[n][target];
        
    }
    int numRollsToTarget(int n, int k, int target) {
        int ans = 0;
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        // ans=solveUsingRecursion(n,k,target);
        ans = solveUsingTopDown(n, k, target,dp);
        return ans;
    }
int main(){
    return 0;
}