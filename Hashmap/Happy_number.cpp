/* The link of the problem is given below:-
https://leetcode.com/problems/happy-number/description/
*/
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while (true) {
        int sum = 0;
            while(n!=0)
            {
            sum = sum + pow(n % 10, 2.0);
            n = n / 10;
            }

            if (sum == 1)
                return true;
            n = sum;
            if (st.contains(n))
                return false;

            st.insert(n);

            }
        }
    
};
