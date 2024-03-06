/*The problem link is below :-
https://leetcode.com/problems/sort-colors/
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low  = 0;
        int high = nums.size()-1;
        int col = 0;
        
        while(col<=high)
        {
            if(nums[col]==0)
            {
                swap(nums[low],nums[col]);
                low++;
                col++;
            }
             else if(nums[col]==1){
                col++;
            }
            else if(nums[col]==2)
            {
                swap(nums[col],nums[high]);
               // col++;
                high--;
            }
        }
    }
};