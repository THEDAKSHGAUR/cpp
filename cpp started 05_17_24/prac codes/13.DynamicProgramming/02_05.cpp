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
// space optimization of 1155
int solvingForSO(int n, int k, int target)
{
    long long int MOD=10000007;
    vector<int> curr(target + 1, 0);
    vector<int> next(target + 1, 0);
    next[target] = 1;
    for (int dice = n - 1; dice >= 0; dice--)
    {
        for (int Sum = target - 1; Sum >= 0; Sum--)
        {
            int ans = 0;
            for (int face = 1; face <= k; face++)
            {
                int recAns = 0;
                if (Sum + face <= target)
                {
                    recAns = next[Sum + face];
                }
                ans = (ans % MOD + recAns % MOD) % MOD;
            }
            curr[Sum] = ans;
        }
        next = curr;
    }
    return next[0];
}
int numRollsToTarget(int n, int k, int target)
{
    int diceUsed = 0;
    int currSum = 0;
    // int ans=solveUsingRecursion(n,k,target,diceUsed,currSum);
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
    int ans = solvingForSO(n, k, target);
    return ans;
}
int main()
{
    return 0;
}