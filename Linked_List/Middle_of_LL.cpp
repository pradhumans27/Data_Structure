/*The link of the problem is given below :-
https://leetcode.com/problems/middle-of-the-linked-list/
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode*fast = head->next;
        ListNode*slow = head;
        while(fast!=NULL)
        {
            fast = fast->next;
            if(fast!=NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
            
        }
        return slow;
    }
};