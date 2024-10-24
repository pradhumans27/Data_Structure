/* The link of the problem is given below:-
https://leetcode.com/problems/sum-root-to-leaf-numbers/description/
*/
class Solution {
public:
long long ans = 0;
void dfs(TreeNode* root ,long long val)
{
    if(root==NULL)
    return;
    val = val*10;
    val = val + root->val;
    if(root->left==NULL && root->right==NULL)
    {
        ans = ans +val;
        return ;
    }
    dfs(root->left,val);
    dfs(root->right,val);
}
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
        return 0;
        dfs(root ,0);
        return ans;
    }
};