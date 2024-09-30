/*The link of the problem is given below:-
https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)return nums.size();

        int i = 2;
        for(int j  = 2;j<nums.size();j++)
        {
            if(nums[j]!=nums[i-2])
            {
                nums[i] = nums[j];
                
            i++;
            }
        }
        return i;
    }
};