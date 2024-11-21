/* The link of the problem is given below:-
https://leetcode.com/problems/path-sum/description/
*/
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        return false;

         if(root->left==NULL && root->right==NULL && root->val==targetSum)
         return root;

        bool left = hasPathSum(root->left,targetSum-root->val);
        bool right = hasPathSum(root->right,targetSum-root->val);   

        return left|| right;

    }
};