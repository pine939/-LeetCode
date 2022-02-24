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
        
        while (head != NULL) {
            ListNode *tmp = head->next;  // 다음 주소를 임시로 가지고 있는다.
            head->next = answer;  // 다음 주소가 answer를 가리키도록 (맨 처음은 NULL이다)
            answer = head;  // answer는 리턴해야 하는 reverse값. 현재 값을 가리키도록 한다.
            head = tmp;  // 다음 반복을 위함
        }
        
        return answer;
    }
};