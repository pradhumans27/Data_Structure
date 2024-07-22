/* The link of the question is given below:-
https://leetcode.com/problems/symmetric-tree/description/ 
*/

class Solution {
public:
    bool solve(TreeNode*root1,TreeNode*root2)
    {
        if(root1==NULL && root2==NULL){
            return true;
        }
        if(root1!=NULL && root2==NULL || root1==NULL && root2!=NULL)
        {
            return false;
        }
        if(root1->val!=root2->val)
        {
            return false;
        }
        bool check_left = solve(root1->left,root2->right);
        bool check_right = solve(root1->right,root2->left);
        if(check_left && check_right)
        {
            return true;
        }
        else return false;

    }
    bool isSymmetric(TreeNode* root) {
        return solve(root->left,root->right);
    }
};