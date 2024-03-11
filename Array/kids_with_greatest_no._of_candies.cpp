/* The link of the problem is given below :-
https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/
*/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> result;
        int n = candies.size();
        vector<int>aa =candies;
        sort(aa.begin(),aa.end());
        
        for(int i = 0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies<aa[n-1])
            {
               result.push_back(false);
            }
            else
            {
               result.push_back(true);
            }
        }
        return result;

    }
};