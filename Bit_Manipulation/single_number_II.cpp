/* The link of the given problem is given below:-
https://leetcode.com/problems/single-number-ii/description/
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int size = nums.size();
         sort(nums.begin(),nums.end());
         for(int i = 1;i<nums.size();i+=3)
         {
            if(nums[i]!=nums[i-1])
            {
                return nums[i-1];
            }
         }
         return nums[size-1];
    }
};