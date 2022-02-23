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
        ListNode *dummy = new ListNode(0);
        ListNode *head = dummy;
        
        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) {
                dummy->next = list1;
                list1 = list1->next;
            } else {
                dummy->next = list2;
                list2 = list2->next;
            }
            dummy = dummy->next;
        }
        
        if (list1 != NULL) {
            dummy->next = list1;
        } else {
            dummy->next = list2;
        }
        return head->next;
    }
};

/*
1. Recursion
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

*/