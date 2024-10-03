/* The link of the problem is given below:-
https://leetcode.com/problems/length-of-last-word/description/
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ptr = s.size()-1;
        int count = 0;
        while(ptr>=0 && s[ptr]==' ')ptr--;
        while(ptr>=0 && s[ptr]!=' ')
        {
            count++;
            ptr--;
        }
        return count;
    }
};