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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* temp = head;
        vector<int> v;
        vector<int> k;
        map<int, int> m;
        map<int, int>::iterator it;
        
        while(temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        for (int i = 0; i < v.size(); i++) {
            m[v[i]]++;
        }
        
        for (it=m.begin(); it!=m.end(); it++) {
            if(it->second == 1) {
                k.push_back(it->first);
            }
        }
        
        if (k.size() > 0) {
            ListNode* ans = new ListNode(k[0]);
            ListNode* tail = ans;
        
            for (int i = 1; i < k.size(); i++) {
                ListNode* a = new ListNode(k[i]);
                tail->next = a;
                tail = a;
            }   
            
            return ans;
        } else {
            return temp;
        }
    }
};