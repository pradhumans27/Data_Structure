/* The link of the question is given below :-
https://leetcode.com/problems/summary-ranges/description/
*/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> arr;
        int curr = 0; 
        int n = nums.size(); 
        
        for (int i = 1; i <= n; i++) { 
            
            if (i == n || nums[i - 1] + 1 != nums[i]) {
                if (curr == i - 1) { 
                   
                    arr.push_back(to_string(nums[curr]));
                } else {
                    
                    arr.push_back(to_string(nums[curr]) + "->" + to_string(nums[i - 1]));
                }
                curr = i; 
            }
        }
        return arr;
    }
};