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
        ListNode *tmpNode = head;
        int size;
        
        for (size = 0; tmpNode != NULL; size++) {
            tmpNode = tmpNode->next;
        }
        
        tmpNode = head;
        
        ListNode *prev = NULL;
        ListNode *after = NULL;
        
        for (int i = 0; i < (size - n); i++) {
            prev = tmpNode;
            tmpNode = tmpNode->next;
            after = tmpNode->next;
        }
        
        if (prev != NULL) {
            prev->next = after;
        } else {
            head = tmpNode->next;
        }
        
        if ((size == 1) && (n == 1)) {
            return NULL;
        }
        return head;
    }
};