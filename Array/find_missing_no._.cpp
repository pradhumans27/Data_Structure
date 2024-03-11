/* The link of the problem is given below :-
leetcode.com/problems/missing-number/description/
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int ans = 0;
        for(int i = 0;i<=n; i++)
        {
            ans = ans^i;
        }
        for(int i  = 0;i<nums.size();i++)
        {
            ans = ans^nums[i];
        }
        return ans;
    }
};