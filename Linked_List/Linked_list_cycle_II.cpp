/*The link of the problem is given below:-
https://leetcode.com/problems/linked-list-cycle-ii/description/
*/
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast = head;
        ListNode*slow = head;
        while( fast!=NULL&&fast->next!=NULL )
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow)
            {
                ListNode*entrypoint = head;
                
            while(entrypoint!=slow)
            {
                entrypoint = entrypoint->next;
                slow = slow->next;

            }
            return entrypoint;
            }

        }
        return nullptr;
    }
};