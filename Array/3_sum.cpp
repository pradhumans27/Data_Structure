/* The link of the problem is given below:-
https://leetcode.com/problems/3sum/
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
         for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        for (const auto& triplet : result) {
            ans.push_back(triplet);
        }
        return ans;
    }
};