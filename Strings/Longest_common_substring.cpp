/* The link of the problem is given below :-
https://leetcode.com/problems/longest-palindromic-substring/description/
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int max_len = 1;

        for(int i = 1;i<=s.size();i++)
        {
            //for even case
            int l = i-1;
            int r = i;

            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                if(r-l+1>max_len)
                {
                    max_len = r-l+1;
                    start = l;
                }
               l--;
               r++;
            }
        }

            for(int i = 1;i<=s.size();i++)
        {
            //for odd case
            int l = i-1;
            int r = i+1;

            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                if(r-l+1>max_len)
                {
                    max_len = r-l+1;
                    start = l;
                }
                 l--;
               r++;
            }

        }
        return s.substr(start,max_len);
        }
};