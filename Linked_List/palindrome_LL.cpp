/* The link of the problem is given below :-
https://leetcode.com/problems/palindrome-linked-list/
*/
class Solution {
public:
bool palindrome(vector<int>arr)
{
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
        if(arr[start]!=arr[end])
        {
            return 0;
        }
        start++;
        end--;

    }
    return 1;
}
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int>arr;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        return palindrome(arr);
    }
};