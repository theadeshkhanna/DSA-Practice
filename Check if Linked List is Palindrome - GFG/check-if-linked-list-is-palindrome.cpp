// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node* t = head;
        Node* r = head;
        
        r = rev(middleNode(r));
        
        while(r != NULL) {
            if (t->data != r->data) {
                return false;
            }
            
            t = t->next;
            r = r->next;
        }
        
        return true;
    }
    
    int length(Node* temp) {
        if (temp == NULL) {
            return 0;
        }
        
        return 1 + length(temp->next);
    }   
    
    Node* middleNode(Node* temp) {
        int n = length(temp);
        Node* slow = temp;
        Node* fast = temp->next;
        
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if (n % 2 == 0) {
            return slow->next;
        }
        
        return slow;
    }
    
    Node* rev(Node* temp) {
        if (temp == NULL || temp->next == NULL) {
            return temp;
        }
        
        Node* small = rev(temp->next);
        Node* tail = temp->next;
        tail->next = temp;
        temp->next = NULL;
        
        return small;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends