/* The link of the problem is given below:-
https://leetcode.com/problems/single-number/description/
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i =0;i<nums.size();i++)
        {
            res = res^nums[i];
        }
        return res;
    }
};