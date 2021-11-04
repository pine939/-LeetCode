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
        //printf("linked list size : %d\n", size);
        tmpNode = head;
        //printf("%d\n", tmpNode->val);
        
        ListNode *prev = NULL;
        ListNode *after = NULL;
        
        for (int i = 0; i < (size - n); i++) {
            prev = tmpNode;
            tmpNode = tmpNode->next;
            after = tmpNode->next;
            //printf("prev : %d / after : %d\n", prev->val, after->val);
        }
        
        if (prev != NULL) {
            //printf ("%d %d, ", prev->val, after->val);
            prev->next = after;
        } else {
            head = tmpNode->next;
        }
        
        if ((size == 1) && (n == 1)) return NULL;
        
        return head;
    }
};