// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    public:
    class node {
        public: 
        int key;
        int val;
        node* next;
        node* prev;
        node(int k, int v) {
            key = k;
            val = v;
        }
    };
    
    node* head = new node(-1, -1);
    node* tail = new node(-1, -1);
    
    int c;
    unordered_map<int, node*> m;
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        c = cap;
        head->next = tail;
        tail->prev = head;
    }
    
    void addNode(node* newNode) {
        node* temp = head->next;
        newNode->next = temp;
        temp->prev = newNode;
        head->next = newNode;
        newNode->prev = head;
    }
    
    void delNode(node* newNode) {
        node* delPrev = newNode->prev;
        node* delNext = newNode->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
        
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if (m.find(key) != m.end()) {
            node* existing = m[key];
            int value = existing->val;
            
            m.erase(key);
            delNode(existing);
            
            node* newNode = new node(key, value);
            addNode(newNode);
            m[key] = newNode;
            
            return value;
        }
        
        return -1;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        if (m.find(key) != m.end()) {
            node* existing = m[key];
            m.erase(key);
            delNode(existing);
        }
        
        if (m.size() == c) {
            node* lru = tail->prev;
            m.erase(tail->prev->key);
            delNode(lru);
        }
        
        node* newNode = new node(key, value);
        addNode(newNode);
        m[key] = newNode;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends