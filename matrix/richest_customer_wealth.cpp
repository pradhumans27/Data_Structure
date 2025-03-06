/* The link of the problem is given below:-
https://leetcode.com/problems/richest-customer-wealth/description/
*/
class Solution {
    public:
      int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int maxsum = 0;
        for (int i = 0; i < n; i++) {
            vector<int> res = accounts[i];
            int m = res.size();
            int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += res[j];
            }
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
    };