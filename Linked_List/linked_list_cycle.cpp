/* The link of the problem is given below :-
https://leetcode.com/problems/linked-list-cycle/
*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * fast = head;
        ListNode * slow = head;

        while(fast!=NULL)
        {
            fast  = fast->next;
            if(fast!=NULL)
            {
               fast = fast->next;
               slow = slow ->next; 
            }
            if(fast==slow && fast !=NULL )
            {
                return true;
            }

        }
    return false;
    }
};