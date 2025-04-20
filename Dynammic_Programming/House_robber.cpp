/* The link of the problem is given below :-
https://leetcode.com/problems/house-robber/description/
*/

// By Memoisation:
class Solution {
    public:
    int fxn(int idx,vector<int>& nums,vector<int>&dp)
    {
        if(idx==0) return nums[idx];
        if(idx<0)return 0;
        if(dp[idx]!=-1)
        return dp[idx];
        int pick = nums[idx]+fxn(idx-2,nums,dp);
        int not_pick = 0+fxn(idx-1,nums,dp);
        return dp[idx] = max(pick,not_pick);
    }
        int rob(vector<int>& nums) {
            int n = nums.size();
            vector<int>dp(n,-1);
            int ans = fxn(n-1,nums,dp);
            return ans;
        }
    };

    //By Tabulation
    class Solution {
        public:
            int rob(vector<int>& nums) {
                int n = nums.size();
                if (n == 0) return 0; 
                if (n == 1) return nums[0]; 
        
                vector<int> dp(n, 0);
        
                dp[0] = nums[0]; 
                dp[1] = max(nums[0], nums[1]);
        
        
                for (int i = 2; i < n; ++i) {
                    dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]); 
                }
        
                return dp[n - 1];
            }
        };