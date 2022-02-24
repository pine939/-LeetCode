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
    ListNode* reverseList(ListNode* head) {
        ListNode *answer = NULL;
        ListNode *cur = head;
        
        while (cur != NULL) {
            ListNode *tmp = cur->next;
            cur->next = answer;
            answer = cur;
            cur = tmp;
        }
        
        return answer;
    }
};