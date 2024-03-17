/*The link of the problem is given below :-
https://leetcode.com/problems/middle-of-the-linked-list/
*/

class Solution {
public:
    int length(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while (temp != NULL) {
            temp = temp->next;
            len++;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int range = length(head);
         int ans = range/2;
        int cnt = 0;
        ListNode* temp = head;
        while (cnt < ans) {
            temp = temp->next;
            cnt++;
        }

        return temp;
    }
};