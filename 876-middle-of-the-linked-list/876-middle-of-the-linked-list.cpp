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
        int n = 0;
        ListNode *tmp = head;
        while (head) {
            head = head->next;
            n++;
        }
        n = n / 2;
        
        while (n > 0 && tmp) {
            tmp = tmp->next;
            n--;
        }
        return tmp;
    }
};