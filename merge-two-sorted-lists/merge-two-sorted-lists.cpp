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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *L1 = l1;
        ListNode *L2 = l2;
        
        if (l1 == NULL) {
            return l2;
        }
        
        if (l2 == NULL) {
            return l1;
        }
        
        if (L1->val <= L2->val) {
            ListNode *nextNode = mergeTwoLists(L1->next, L2);
            L1->next = nextNode;
            return L1;
        } else {
            ListNode *nextNode = mergeTwoLists(L1, L2->next);
            L2->next = nextNode;
            return l2;
        }
    }
};