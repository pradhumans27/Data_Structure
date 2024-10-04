/* The link of the problem is given below:-
https://leetcode.com/problems/ransom-note/description/
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto it: magazine)
        {
            mp[it]++;
        }
        for(auto it : ransomNote)
        {
            if(mp[it]>0)
            {
                mp[it]--;
            }
            else{
                return false;
            }

        }
        return true;
    }
};