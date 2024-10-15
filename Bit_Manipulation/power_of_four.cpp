/* The link of the problem is given below:-
https://leetcode.com/problems/power-of-four/description/
*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        int num = 1;
        while (num < INT_MAX / 4) {
            if (num == n) return true;
            num *= 4;
        }
        if (num == n) return true;
        return false;
    }
};