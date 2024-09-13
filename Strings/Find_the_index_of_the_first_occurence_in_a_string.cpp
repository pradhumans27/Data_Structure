/*The link of problem is given below:-
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        if(n==0)return 0;
        for(int j = 0;j<h;++j)
        {
            if(haystack[j]==needle[0])
            {int i = 0;
                while(i<n && haystack[j+i]==needle[i])
                {
                    i++;
                    if(i==n)
                    {
                        return j;
                    }
                }
            }

        }
        return -1;
    }
};