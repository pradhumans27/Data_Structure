/* The link of the problem is given below :-
https://leetcode.com/problems/power-of-two/description/
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0 && (n&(n-1))==0)
        {
            return true;
        }
        else 
        return false;
    }
};