/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;  // head's length
        ListNode *answer = head;
        ListNode *dummy = head;
        while(dummy) {
            dummy = dummy->next;
            cnt++;
        }
        
        if (cnt == 1) return NULL;  // if the size of head is 1, return empty list.
        int front = (cnt - n);
        if (front == 0) {  // remove first node of the list.
            head = head->next;
            return head;
        }
        for (int i = 0; i < front-1; i++) {
            head = head->next;
        }
        
        head->next = head->next->next;  // remove Nth node from end of list.
        
        return answer;
    }
};