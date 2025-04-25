/* The link of the problem is given below:-
https://leetcode.com/problems/target-sum/description/
*/
class Solution {
    public:
        int helper(vector<int>& nums, int target, int i, vector<vector<int>>& dp) {
            // Base case: when the index goes out of bounds
            if (i >= nums.size()) {
                return target == 0 ? 1 : 0; // Return 1 if target is met, otherwise 0
            }
    
            // Check if the result is already computed (memoization)
            if (target >= -1000 && target <= 1000 && dp[i][target + 1000] != -1) {
                return dp[i][target + 1000];
            }
    
            // Recursive calls: add and subtract the current number
            int ans = 0;
            ans += helper(nums, target - nums[i], i + 1, dp); // Subtract current number
            ans += helper(nums, target + nums[i], i + 1, dp); // Add current number
    
            // Store the result in the dp table and return it
            if (target >= -1000 && target <= 1000) {
                dp[i][target + 1000] = ans;
            }
    
            return ans;
        }
    
        int findTargetSumWays(vector<int>& nums, int target) {
            int n = nums.size();
            // Adjust dp array dimensions to handle negative target values (-1000 to 1000)
            vector<vector<int>> dp(n, vector<int>(2001, -1)); // 2001 = range [-1000, 1000]
            return helper(nums, target, 0, dp);
        }
    };