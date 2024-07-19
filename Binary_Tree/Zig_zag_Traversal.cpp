/* The link of the problem is given below:-
https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
*/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>result;
        if(root == NULL)
        {
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool lefttoright = true;
        
        while(!q.empty())
        {
            int size  = q.size();
            vector<int>ans(size);

            // level process
            for(int i = 0 ;i<size;i++)
            {
               TreeNode* front = q.front();
               q.pop();

               //check normal insert or reverse insert
               int index = lefttoright ? i : size-i-1;
               
               ans[index] = front->val;

               if(front->left)
               {
                   q.push(front->left);
               }
               if(front->right)
               {
                   q.push(front->right);
               }

               
            }
                // direction change

               lefttoright =! lefttoright;
               result.push_back(ans);
        }
        return result;
    }
};