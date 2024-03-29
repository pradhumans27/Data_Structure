/* The link of the problem is given below :-
https://leetcode.com/problems/add-two-numbers/
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        int carry = 0;
        while(l1!=NULL || l2!=NULL || carry)
        {
        int sum = 0;
            if(l1!=NULL)
            {
                sum  = sum+l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                sum = sum+l2->val;
                l2  = l2->next;

            }
            sum  = sum+carry;
            carry = sum/10;
            ListNode* digitnode = new ListNode(sum%10);
            temp->next = digitnode;
            temp = temp->next;

        }
        return ans->next;
    }
};