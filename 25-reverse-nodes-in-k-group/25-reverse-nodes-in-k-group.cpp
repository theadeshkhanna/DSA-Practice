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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if (head == NULL || k == 1) return head;
        ListNode* size = head;
        
        for (int i = 0; i < k; i++) {
            if (size == NULL) return head;
            size = size->next;
        }
        
        ListNode* p = NULL;
        ListNode* c = head;
        ListNode* n = head;
        ListNode* temp = head;
        int len = 1;
        int cnt = 0;
        
        while(temp != NULL) {
            temp = temp->next;
            len++;
        }
        
        while(c != NULL && cnt < k) {
            n = n->next;
            c->next = p;
            p = c;
            c = n;
            cnt++;
        }
        
        if (n != NULL && cnt < len) {
            head->next = reverseKGroup(n, k);
        }
        
        return p;
    }
};