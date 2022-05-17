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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = lists.size();
        
        if (n == 0) return NULL;
        
        for (int i = 0; i < n; i++) {
            ListNode* head = lists[i];
            while(head) {
                pq.push(head->val);
                head = head->next;
            }
        }
        
        if (pq.size() == 0) return NULL;
        
        ListNode* ans = new ListNode(pq.top());
        ListNode* tail = ans;
        pq.pop();
        
        while(pq.size() > 0) {
            ListNode* a = new ListNode(pq.top());
            tail->next = a;
            tail = a;
            pq.pop();
        }
        
        return ans;
    }
};