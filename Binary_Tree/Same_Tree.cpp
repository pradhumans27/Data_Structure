/* The link of the problem is given below :-
https://leetcode.com/problems/same-tree/description/
*/
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
     if (p==NULL && q==NULL)
     return true;
     if(p==NULL && q!=NULL || p!=NULL && q==NULL)
     return false;

     if(p->val != q->val)
     return false;
      
      bool left = isSameTree(p->left,q->left);
      bool right = isSameTree(p->right,q->right);
      
      if(left && right)
      {
        return true;
      }
      return false;
     
    }
};