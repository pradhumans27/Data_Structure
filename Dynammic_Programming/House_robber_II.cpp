/* The link of the problem is given below:-
https://leetcode.com/problems/house-robber-ii/description/
*/

class Solution {
    public:
    int solve1(vector<int>& nums,int n,int i,vector<int>& dp){ 
        if(n==i) return nums[i];
        if(n<i) return 0;
        if(dp[n]!=-1) return dp[n];
        int inc = nums[n] + solve1(nums,n-2,i,dp);
        int exc = 0 + solve1(nums,n-1,i,dp);
        dp[n] = max(inc,exc); 
        return dp[n];
        }
    
        int rob(vector<int>& nums) {
            int n = nums.size();
            if(n==1) return nums[0];
            if(n == 2) return max(nums[0],nums[1]);
            vector<int> dp(n+1,-1);
            int ans1 = solve1(nums,n-2,0,dp);
            dp.clear();
            dp = vector<int>(n+1,-1);
            int ans2 = solve1(nums,n-1,1,dp);
            return max(ans1,ans2);
        }
    };