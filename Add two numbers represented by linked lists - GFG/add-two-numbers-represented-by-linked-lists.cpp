// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* ans = new Node(0);
        Node* tail = ans;
        int carry = 0;
        
        Node* f = reverse(first);
        Node* s = reverse(second);
        
        while(f || s || carry) {
            int sum = 0;
            
            if (f) {
                sum += f->data;
                f = f->next;
            }
            
            if (s) {
                sum += s->data;
                s = s->next;
            }
            
            sum += carry;
            Node* a = new Node(sum % 10);
            carry = sum / 10;
            tail->next = a;
            tail = a;
        }
        
        return reverse(ans->next);
    }
    
    struct Node* reverse(struct Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        Node* small = reverse(head->next);
        
        Node* tail = head->next;
        tail->next = head;
        head->next = NULL;
        
        return small;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends