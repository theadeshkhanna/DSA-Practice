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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        ListNode* front = NULL;
        ListNode* back = NULL;
        int len = 0;
        int cf = 1;
        int cb = 1;
        int v;
        
        
        while(temp != NULL) {
            len++;
            temp = temp->next;
        }
        
        while(temp1 != NULL) {
            if (cf == k) {
                front = temp1;
                break;
            }
            cf++;
            temp1 = temp1->next;
        }
        
        int mk = len - k + 1;
        
        while(temp2 != NULL) {
            if (cb == mk) {
                back = temp2;
                break;
            }
            cb++;
            temp2 = temp2->next;
        }
        
        v = front->val;
        front->val = back->val;
        back->val = v;
        
        return head;
    }
};