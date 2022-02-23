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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *l1 = list1;
        ListNode *l2 = list2;
        
        if (list1 == NULL) {
            return list2;
        }
        
        if (list2 == NULL) {
            return list1;
        }
        
        if (l1->val <= l2->val) {
            ListNode *nextNode = mergeTwoLists(l1->next, l2);
            l1->next = nextNode;
            return l1;
        } else {
            ListNode *nextNode = mergeTwoLists(l1, l2->next);
            l2->next = nextNode;
            return l2;
        }
    }
};