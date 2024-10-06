/* The link of the problem is given below:-
https://leetcode.com/problems/rotate-image/description/
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // first find the transpose of the matrix
        for(int i = 0; i<n;i++)
        {
            for(int j = i;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
//Then reverse all the row of the matrix
        for(int i = 0; i<n;i++)
        {
            for(int j = 0;j<n/2;j++)
            {
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }

    }
};