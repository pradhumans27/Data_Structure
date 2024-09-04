/*The link of the problem is given below:-
https://leetcode.com/problems/rotate-list/description/
*/
class Solution {
public:
    ListNode* findNewNode(ListNode* head, int k) {
        // ListNode*temp = head;
        int cnt = 1;
        while (head != NULL) {
            if (cnt == k)
                return head;
            cnt++;
            head = head->next;
        }
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k==0)return head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next)
        {
            ++len;
            tail = tail->next;
        }
        if (k%len== 0)
            return head;
        k = k % len;
        
        tail->next = head;
        ListNode* newLastNode = findNewNode(head, len - k);
        head = newLastNode->next;
        newLastNode->next = NULL;
        return head;
    }
};
