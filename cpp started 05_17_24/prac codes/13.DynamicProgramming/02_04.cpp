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
//doing q 1155 further with new approach and  from tabulation
int solveUsingTabulation(int n, int k, int target) {
        long long int MOD=10000007;
        vector<vector<int>> dp(n + 2, vector<int>(target + 2, 0));
        dp[n][target] = 1;
        for (int dice = n-1; dice >= 0; dice--) {
            for (int Sum = target-1; Sum >= 0; Sum--) {
                int ans = 0;
                for (int face = 1; face <= k; face++) {
                    int recAns = 0;
                    if (Sum + face <= target) {
                        recAns = dp[dice+ 1][Sum + face];
                    }
                    ans = (ans % MOD + recAns % MOD) % MOD;
                }
                dp[dice][Sum] = ans;
            }
        }
        return dp[0][0];
    }
    int numRollsToTarget(int n, int k, int target) {
        int diceUsed = 0;
        int currSum = 0;
        // int ans=solveUsingRecursion(n,k,target,diceUsed,currSum);
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        int ans =solveUsingTabulation(n, k, target);
        return ans;
    }
int main(){
    return 0;
}