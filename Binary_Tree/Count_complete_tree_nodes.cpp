/* The link of the problem is given below:-
https://leetcode.com/problems/count-complete-tree-nodes/description/
*/
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL)
        return 0;

        int left = countNodes(root->left);
        int right = countNodes(root->right);
        int result = 1+left+right;
        return result;
    }
};