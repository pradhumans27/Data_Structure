/* The link of the problem is given below :-
https://leetcode.com/problems/string-to-integer-atoi/description/
*/

class Solution {
public:
    int myAtoi(string s) {
        long long int ans = 0;
        int i = 0;
        
        // Skip leading whitespaces
        while(s[i] == ' ') i++;
        
        int sign = 0;  
        
        // Handle signs
        if(s[i] == '-') { 
            sign = 1;
            i++;
        } else if(s[i] == '+') {
            sign = 0;
            i++;
        }
        while(s[i] == '0') i++;
        while(s[i] >= '0' && s[i] <= '9') {
            if(ans > INT_MAX) {
                if(sign) return INT_MIN;
                return INT_MAX;
            }
            ans = ans * 10 + s[i] - '0';
            i++;
        }
        if(sign) {
            ans *= -1;
        }
        
        if(ans > INT_MAX) return INT_MAX;
        if(ans < INT_MIN) return INT_MIN;
        
        return (int) ans;
    }
};