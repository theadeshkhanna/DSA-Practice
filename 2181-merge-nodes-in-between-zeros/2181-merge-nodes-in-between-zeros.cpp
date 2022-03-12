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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        vector<int> k;
        while(temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        int sum = 0;
        
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0) {
                k.push_back(sum);
                sum = 0;
            } else {
                sum += v[i];
            }
        }
        
        ListNode* ans = new ListNode(k[1]);
        ListNode* tail = ans;
        
        for (int i = 2; i < k.size(); i++) {
            ListNode* a = new ListNode(k[i]);
            tail->next = a;
            tail = a;
        }
        
        return ans;
    }
};