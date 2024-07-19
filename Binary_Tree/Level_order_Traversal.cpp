/* The link of the problem is given below :-
https://leetcode.com/problems/binary-tree-level-order-traversal/description/
*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);

        if (root == NULL) {
            return ans;
        }
        while (true) {
            int size = q.size();
            if (size == 0) {
                return ans;
            }
            vector<int>data;
            while (size > 0) {
               TreeNode* temp = q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                size--;
            }
            ans.push_back(data);
        }
    }
};