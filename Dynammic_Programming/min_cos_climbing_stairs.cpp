/* The link of the problem is given below:-
https://leetcode.com/problems/min-cost-climbing-stairs/description/
*/
class Solution {
    public:
    int helper(vector<int>& cost,vector<int>&dp,int idx)
    {
        if(idx<0) return 0;
        if(idx==0||idx==1) return cost[idx];
        if(dp[idx]!=-1)
        return dp[idx];
    
        dp[idx] =cost[idx]+ min(helper(cost,dp,idx-1),helper(cost,dp,idx-2));
        return dp[idx];
    }
        int minCostClimbingStairs(vector<int>& cost) {
            int n = cost.size();
            vector<int>dp(n,-1);
            int ans = min(helper(cost,dp,n-1),helper(cost,dp,n-2));
            return ans;
        }
    };