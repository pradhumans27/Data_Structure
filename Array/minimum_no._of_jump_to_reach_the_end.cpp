/* The link of the problem is given below:-
https://leetcode.com/problems/jump-game-ii/description/
*/
class Solution {
public:
    int jump(vector<int>& nums) {
        int curr_end = 0;
        int longest = 0;
        int jumps = 0;
        int n = nums.size();
        if(n==1)return 0;
        for(int i = 0; i<n;i++)
        {
            longest = max(longest,i+nums[i]);
            if(i==curr_end)
            {
                jumps++;
                curr_end = longest;
                if(curr_end>=n-1)break;
            }
        }
        return jumps;
    }
};