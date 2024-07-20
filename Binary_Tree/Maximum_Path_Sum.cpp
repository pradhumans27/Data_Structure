/* The link of the problem is given below:-
https://leetcode.com/problems/binary-tree-maximum-path-sum/description/
*/

class Solution {
public:
int maxPath(TreeNode* root , int & maxi)
{
    if(root==NULL)
    {
        return 0;
    }
    int left = maxPath(root->left,maxi);
    int right = maxPath(root->right,maxi);
    maxi = max(
        {maxi, left+root->val , right+root->val, left+right+root->val,root->val});
        return max(max(left,right)+root->val,root->val);
}
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPath(root,maxi);
        return maxi;
    }
};