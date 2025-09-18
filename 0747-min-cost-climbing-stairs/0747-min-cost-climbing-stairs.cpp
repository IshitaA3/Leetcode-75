class Solution {
public:

    int solve(vector<int>& cost, int n, int i, vector<int>& dp){
        if(i>=n)
            return 0;
        if(dp[i] != -1)
            return dp[i];

        return dp[i] =  min(cost[i]+solve(cost, n, i+1, dp), cost[i]+solve(cost, n, i+2, dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+2, -1);
        return min(solve(cost, n, 0, dp), solve(cost, n, 1, dp));
    }
};