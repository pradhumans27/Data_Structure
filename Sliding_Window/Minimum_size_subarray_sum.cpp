/* The link of the problem is given below:-
https://leetcode.com/problems/minimum-size-subarray-sum/description/
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int window = 0;
        int ans = INT_MAX;
         int left = 0;
        int n = nums.size();
        for(int right = 0;right<n;right++)
        {
            window = window+nums[right];
            while(window>=target)
            {
                ans = min(ans,right-left+1);
                window = window-nums[left];
                left++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};