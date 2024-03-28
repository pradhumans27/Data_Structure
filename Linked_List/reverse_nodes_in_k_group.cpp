/* The link of the question is given below :-
https://leetcode.com/problems/reverse-nodes-in-k-group/
*/
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
         ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
             ListNode* prev = NULL;
              ListNode* forward  = NULL;
               ListNode* curr = head;
               int count = 0;
               while (curr!=NULL && count<k)
               {
                   forward = curr->next;
                   curr->next = prev;
                   prev = curr;
                   curr = forward;
                   count++;
               }
                    if(forward!=NULL)
                    {

               head->next = reverseKGroup(forward,k);
                    }
               return prev;


    }
};