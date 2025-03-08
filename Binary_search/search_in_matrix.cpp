/* The link of the problem is given below:-
https://leetcode.com/problems/search-a-2d-matrix/description/?envType=problem-list-v2&envId=binary-search
*/
class Solution {
    public:
     int searchovercolumn(vector<vector<int>>& matrix, int target)
        {
            int left = 0;
            int right = matrix.size()-1;
            int mid;
            while(left<=right)
            {
                mid = left+(right-left)/2;
                if(target>=matrix[mid][0] && target<=matrix[mid][matrix[0].size()-1])
                return mid;
    
                else if(target>matrix[mid][0])
                left = mid+1;
                
                else if(target<matrix[mid][0])
                right = mid-1;
            }
            return -1;
        }
        bool searchoverrow(int row_idx,vector<vector<int>>& matrix, int target)
        {
            int left = 0;
            int right = matrix[row_idx].size()-1;
            int mid;
            while(left<=right)
            {
                 mid = left+(right-left)/2;
                 if(matrix[row_idx][mid]==target)
                 return true;
                 else if(matrix[row_idx][mid]>target)
                 right = mid-1;
                 else if(matrix[row_idx][mid]<target)
                 left = mid+1;
            }
            return false;
        }
    
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row_idx = searchovercolumn(matrix,target);
            if(row_idx!=-1)
            {
               return searchoverrow(row_idx,matrix,target);
            }
            else
            return false;
        }
    };