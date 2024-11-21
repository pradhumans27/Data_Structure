/* The link of the problem is given below:-
https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/description/
*/

class Solution {
public:
    void solve(Node*root){
        if(root==0){
            return ;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int a=q.size();
            Node*p=q.front();
            q.pop();
            for(int i=1;i<a;i++){
                Node*t=q.front();
                q.pop();
                p->next=t;
                if(p->left){
                    q.push(p->left);
                }
                if(p->right){
                    q.push(p->right);
                }
                p=t;
            }
            if(p->left){
                    q.push(p->left);
                }
                if(p->right){
                    q.push(p->right);
                }
            p->next=0;
        }
    }

    Node* connect(Node* root) {
        solve(root);
        return root;
    }
};