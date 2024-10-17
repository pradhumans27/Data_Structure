/* The link of the problem is given below:-
https://leetcode.com/problems/contains-duplicate-ii/description/
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i = 0; i<nums.size();i++)
        {
           if(mp.find(nums[i])!=mp.end())
           {
            if(abs(mp[nums[i]] - i) <= k) return true;
           }
           mp[nums[i]]=i;
        }
        return false;
    }
};