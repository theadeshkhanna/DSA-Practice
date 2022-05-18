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
    ListNode* swapPairs(ListNode* head) {
        
        if (head == NULL || head->next == NULL) return head;
        
        ListNode* temp = head;
        ListNode* first = head;
        ListNode* second = head;
        
        int flag = 0;
        
        while(second->next) {
            first = second->next;
            second->next = first->next;
            first->next = second;
            
            if (flag == 0) {
                head = first;
            } else {
               temp->next = first;
               temp = second;
            }
            
            second = second->next;
            first = second;
            if (second == NULL) break;
            flag = 1;
        }
        
        return head;
    }
};