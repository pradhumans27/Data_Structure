/* The link of the problem is given below :-
    https://leetcode.com/problems/remove-nth-node-from-end-of-list/
*/

// Bruite force 
class Solution {
public:
    int length(ListNode* head) {
        int len = 0;
        while (head != NULL) {
            head = head->next;
            len++;
        }

        return len;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);

        if (len == n)
            return head->next;

        ListNode* temp = head;
        int pos = 1;
        while (pos < len - n) {
            temp = temp->next;
            pos++;
        }

        if (temp->next == NULL)
            return NULL;

        temp->next = temp->next->next;

        return head;
    }
};


// optimize approach

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode(0, head);
        
        ListNode* lead = head;
        for (int i = 1; i <= n; i++)
            lead = lead->next;

        ListNode* cur = res;
        while (lead != NULL) {
            cur = cur->next;
            lead = lead->next;
        }

        cur->next = cur->next->next;
        return res->next;
    }
};