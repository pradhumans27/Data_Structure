/* The link of the problem is given below:-
https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=binary-search
*/
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            
            int left = 0;
            int right = nums.size()-1;
           
            while(left<=right)
            { int mid = left+(right-left)/2;
                if(nums[mid]==target)
                return mid;
    
                if(nums[mid]>target)
                {
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
            return right +1;
        }
    };