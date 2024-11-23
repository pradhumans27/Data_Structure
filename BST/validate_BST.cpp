/* The link of the problem is given below:-
https://leetcode.com/problems/validate-binary-search-tree/description/
*/
class Solution {
public:
void inorder(TreeNode *root,vector<int>&ans)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    bool isValidBST(TreeNode* root) {
        vector<int>res;
        inorder(root,res);
      for(int i=1; i<res.size(); ++i) {
           
            if(res[i-1]>=res[i]) return false;
        }
        return true;
    }
};