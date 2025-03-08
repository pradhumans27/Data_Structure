/* The link of the problem is given below:-
https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/?envType=problem-list-v2&envId=binary-search
*/
class Solution {
    public:
        int countNegatives(vector<vector<int>>& grid) {
            int count = 0;
            for(int i = 0;i<grid.size();i++)
            {
                int left = 0;
                int right = grid[i].size()-1;
                int mid;
                while(left<=right)
                {
                    mid = left+(right-left)/2;
                    if(grid[i][mid]>=0)
                    left = mid+1;
                    else if(grid[i][mid]<0)
                    right = mid-1;
                }
                count+=grid[i].size()-left;
    
            }
            return count;
        }
    };