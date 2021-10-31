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
    ListNode* middleNode(ListNode* head) {
        ListNode *tmpNode = head;
        int size;
        for (size = 0; head != NULL; size++) {
            head = head->next;
        }
        
        size = size - 1;
        int mid = size / 2;
        if (size % 2 != 0) {
            mid += 1;
        }
        
        for (int i = 0; i <= size; i++) {
            if (i < mid) {
                tmpNode = tmpNode->next;
                continue;
            }
        }
        return tmpNode;
    }
};