/* The link of the problem is given below:-
https://leetcode.com/problems/set-matrix-zeroes/description/
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int rows = matrix.size();
        int col = matrix[0].size();

// for column
        for (int i = 0 ;i<rows;i++)
        {
            for(int j =0 ; j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k = 0;k<col;k++)
                    {
                        if(matrix[i][k]!=0)
                        {
                            matrix[i][k] = -99999;
                        }
                    }
                }
            }
        }
        for (int i = 0;i<rows;i++)
        {
            for(int j = 0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k = 0;k<rows;k++)
                    {
                        if(matrix[k][j]!=0){
                            matrix[k][j] = -99999;
                        }
                    }
                }
            }
        }
        for(int i=0;i<rows;i++)
        {
            for(int j = 0;j<col;j++)
            {
                if(matrix[i][j]==-99999)
                {
                    matrix[i][j]=0;
                }
            }
        }

    }
};