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
    bool isPalindrome(ListNode* head) {
        bool res = true;
        int cnt = 0;
        ListNode *tmpNode = head;
        
        while (head != NULL) {
            cnt++;
            head = head->next;
        }
        
        if (cnt == 1) return res;
        for (int i = 0 ; i < (cnt / 2); i++) {
            if (((tmpNode + sizeof(short)*i)->val)
                != ((tmpNode + sizeof(short)*(cnt - i - 1))->val)) {
                res = false;
            }
        }
        return res;
    }
};