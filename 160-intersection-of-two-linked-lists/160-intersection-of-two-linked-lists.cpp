/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 1;
        int l2 = 1;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        
        while(temp1) {
            l1++;
            temp1 = temp1->next;
        }
        
        while(temp2) {
            l2++;
            temp2 = temp2->next;
        }
        
        int d;
        ListNode* ptr1;
        ListNode* ptr2;
        
        if (l1 > l2) {
            d = l1 - l2;
            ptr1 = headA;
            ptr2 = headB;
        } else {
            d = l2 - l1;
            ptr1 = headB;
            ptr2 = headA;
        }
        
        while(d) {
            ptr1 = ptr1->next;
            if(!ptr1) return NULL;
            d--;
        }
        
        while(ptr1 && ptr2) {
            if (ptr1 == ptr2) return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        return NULL;
    }
};