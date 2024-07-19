/*The link of the problem is given below:-
https://leetcode.com/problems/balanced-binary-tree/description/
*/

class Solution {
    private:
    pair<bool ,int>balancefast(TreeNode* root)
    {
        // base case...
        if(root==NULL)
        {
           pair<bool,int>p = make_pair(true,0);
           return p; 
        }

        pair<int ,int>left = balancefast(root->left);
        pair<int ,int>right = balancefast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second-right.second)<=1;

        pair<bool ,int>ans;
        ans.second  = max(left.second , right.second) +1 ;
        if(leftAns && rightAns && diff)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;

    }
public:
    bool isBalanced(TreeNode* root) {
        return balancefast(root).first;
    }
};