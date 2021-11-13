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
// https://favtutor.com/blogs/reverse-a-linked-list-cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *node = NULL;
        ListNode *temp = NULL;
        
        while (head) {
            temp = head;
            head = head->next;
            temp->next = node;
            node = temp;
        }

        
        return node;
    }
};