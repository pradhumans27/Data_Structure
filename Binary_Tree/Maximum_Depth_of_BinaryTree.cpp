/* The link of the problem is given below :-
https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root==NULL)
        {
            return 0;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        int Depth = max(left, right)+1;
        return Depth;

    }
};