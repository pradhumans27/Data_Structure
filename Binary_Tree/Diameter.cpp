/* The link of the problem is given below:-
https://leetcode.com/problems/diameter-of-binary-tree/description/
*/
class Solution {
public:
int ma;
int func(TreeNode*root)
{
    if(root==NULL)
    return 0;
    int x = func(root->left);
    int y = func(root->right);
    ma = max(ma,x+y+1);
    return(max(x,y)+1);
}
    int diameterOfBinaryTree(TreeNode* root) {
        ma = INT_MIN;
        int x = func(root);
        return ma-1;
    }
};
