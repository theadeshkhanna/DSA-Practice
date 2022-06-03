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
    void reorderList(ListNode* head) {
        vector<int> v;
        vector<int> x;
        
        ListNode* temp = head;
        while(temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        int i = 0;
        int j = v.size() - 1;
        int flag = 0;
        
        while(i <= j) {
            if (flag == 0) {
                x.push_back(v[i++]);
                flag = 1;
            } else {
                x.push_back(v[j--]);
                flag = 0;
            }
        }
        
        ListNode* a = new ListNode(x[0]);
        ListNode* tail = a;
        
        for (int i = 1; i < x.size(); i++) {
            ListNode* b = new ListNode(x[i]);
            tail->next = b;
            tail = b;
        }
        
        *head = *a;
    }
};