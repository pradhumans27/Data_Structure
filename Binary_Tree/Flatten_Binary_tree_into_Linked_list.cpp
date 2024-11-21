/* The link of the problem is given below:-
https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/
*/
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return ;

        TreeNode* temp_left = root->left;
        TreeNode* temp_right = root->right;
        root->left = NULL;
        flatten(temp_left);
        flatten(temp_right);
        root->right = temp_left;
        TreeNode * curr = root;
        while(curr->right!=NULL) curr = curr->right;
        curr->right = temp_right;
    }
};