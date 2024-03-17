/* The link of the problem is given below:-
https://leetcode.com/problems/reverse-linked-list/ 
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* forward = NULL;
        ListNode* previous = NULL;
        if(head==NULL || head->next ==NULL)
        {
            return head;
        }
        while(curr!=NULL)
        {
            forward = curr->next;
            curr->next = previous;
            previous = curr;
            curr = forward;
        }
        head = previous;
        return head;
    }
};