/* The link of the problem is given below :-
https://leetcode.com/problems/invert-binary-tree/description/  
*/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }

       invertTree(root->left);
       invertTree(root->right);
       TreeNode*temp = root->left;
       root->left = root->right;
       root->right = temp;
       return root;


    }
};