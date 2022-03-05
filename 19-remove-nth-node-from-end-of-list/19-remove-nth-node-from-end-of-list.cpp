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
        int cnt = 0;
        ListNode *answer = head;
        ListNode *dummy = head;
        while(dummy) {
            dummy = dummy->next;
            cnt++;
        }
        
        if (cnt == 1) return NULL;
        int front = (cnt - n);
        if (front == 0) {
            head = head->next;
            return head;
        }
        for (int i = 0; i < front-1; i++) {
            head = head->next;
        }
        
        head->next = head->next->next;
        
        return answer;
    }
};