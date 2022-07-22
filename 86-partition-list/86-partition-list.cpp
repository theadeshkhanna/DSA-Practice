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
    ListNode* partition(ListNode* head, int x) {
        
        if (head == NULL) {
            return head;
        }
        
        ListNode* temp = head;
        vector<int> v;
        vector<int> t;
        
        while(temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        for (int i = 0; i < v.size(); i++) {
            if (v[i] < x) t.push_back(v[i]);
        }
        
        if (t.size() == 0) {
            return head;
        }
        
        for (int i = 0; i < v.size(); i++) {
            if(v[i] >= x) t.push_back(v[i]);
        }
        
        ListNode* ans = new ListNode(t[0]);
        ListNode* tail = ans;
        
        for (int i = 1; i < t.size(); i++) {
            ListNode* a = new ListNode(t[i]);
            tail->next = a;
            tail = a;
        }
        
        return ans;
    }
};