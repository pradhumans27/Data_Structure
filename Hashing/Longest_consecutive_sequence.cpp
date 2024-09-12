/*The link of the problem is given below :-
https://leetcode.com/problems/longest-consecutive-sequence/description/
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int size = nums.size();
        if (size == 0)
            return 0;
        int longest = 1;
        for(int i =0;i<size;i++)
        {
            st.insert(nums[i]);
        }
        for(auto it : st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt = 1;
                int starting_element = it;
                while(st.find(starting_element+1)!=st.end())
                {
                    starting_element = starting_element+1;
                    cnt++;

                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }

};