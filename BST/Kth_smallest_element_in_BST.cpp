/* The link of the problem is given below:-
https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
*/
class Solution {
public:
void inorder(TreeNode* root , vector<int>&res)
{
    if(root==NULL)
    {
        return ;
    }

    inorder(root->left,res);
    res.push_back(root->val);
    inorder(root->right,res);
    
}
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        inorder( root , ans);
        return ans[k-1];
    }
};