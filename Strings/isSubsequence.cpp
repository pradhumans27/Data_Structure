/* The link of the problem is given below:-
https://leetcode.com/problems/is-subsequence/description/
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
       int p1 = 0;
       int p2 = 0;

       while(p1<s.size() && p2<t.size())
       {
        if(s[p1]==t[p2])
        {
            p1++;
            // p2++;
        }

        p2++;
       }
     return p1 == s.size();
    }
};