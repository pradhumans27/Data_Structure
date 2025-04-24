/* The link of the problem is given below :- 
https://leetcode.com/problems/longest-increasing-subsequence/description/
*/

class Solution {
    public:
        int helper(vector<int>& nums, vector<vector<int>>& dp, int i, int prevIndex) {
            int n = nums.size();
            if (i == n) return 0;
            if (dp[i][prevIndex + 1] != -1) {
                return dp[i][prevIndex + 1];
            }
            // Exclude 
            int exclude = helper(nums, dp, i + 1, prevIndex);
            // Include 
            int include = 0;
            if (prevIndex == -1 || nums[i] > nums[prevIndex]) {
                include = 1 + helper(nums, dp, i + 1, i);
            }
    
            // Memoize the result
            dp[i][prevIndex + 1] = max(include, exclude);
            return dp[i][prevIndex + 1];
        }
    
        int lengthOfLIS(vector<int>& nums) {
            int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
            return helper(nums, dp, 0, -1);
        }
    };