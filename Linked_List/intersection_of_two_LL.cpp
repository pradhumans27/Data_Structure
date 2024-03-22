/* The link of the problem is given below:
https://leetcode.com/problems/intersection-of-two-linked-lists/
*/
class Solution {
public:

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = 0;
        int m = 0;
        ListNode * ptr1 = headA;
        ListNode * ptr2 = headB;

        while(ptr1!=NULL)
        {
                n++;
                ptr1= ptr1->next;
        }
        while(ptr2!=NULL)
        {
            m++;
            ptr2 = ptr2->next;
        }
        int diff = abs(n-m);
        if(n>m)
        {
            while(diff)
            {
                headA = headA->next;
                diff--;
            }
        }
        else
        {
            while(diff)
            {
                headB = headB->next;
                diff--;
            }
        }
        while(headA !=NULL && headB !=NULL)
        {
            if(headA == headB)
            {
                return headA;
            }
            headA = headA -> next;
			headB = headB -> next;
        }
        return NULL;
    }
};