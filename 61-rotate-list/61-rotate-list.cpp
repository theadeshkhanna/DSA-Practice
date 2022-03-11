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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* temp = head;
        vector<int> v;
        int len = 0;
        
        while(temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
            len++;
        }
        
        if (k < len) {
            for (int i = k; i > 0; i--) {
                int n = v.size();
                int lastVal = v[n - 1];
        
                for (int i = 0; i < v.size(); i++) {
                    if (n - i > 1) {
                        v.at(n - i - 1) = v.at(n - i - 2);    
                    }
                }
        
                v.at(0) = lastVal;   
            }   
        } else {
            int t = k % len;
            for (int i = t; i > 0; i--) {
                int n = v.size();
                int lastVal = v[n - 1];
        
                for (int i = 0; i < v.size(); i++) {
                    if (n - i > 1) {
                        v.at(n - i - 1) = v.at(n - i - 2);    
                    }
                }
        
                v.at(0) = lastVal;   
            }  
        }
        
        ListNode* ans = new ListNode(v[0]);
        ListNode* tail = ans;
        
        for (int i = 1; i < v.size(); i++) {
            ListNode* a = new ListNode(v[i]);
            tail->next = a;
            tail = a;
        }
        
        return ans;
    }
};