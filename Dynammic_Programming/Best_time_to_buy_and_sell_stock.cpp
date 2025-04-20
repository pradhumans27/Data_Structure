/* The link of the problem is given below:-
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
*/
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int mini = prices[0];
            int max_profit = 0;
            if(n==0)return 0;
            
            for(int i  = 1;i<prices.size();i++)
            {
                mini = min(mini,prices[i]);
                max_profit = max(max_profit,prices[i]-mini);
            }
            return max_profit;
        }
    };