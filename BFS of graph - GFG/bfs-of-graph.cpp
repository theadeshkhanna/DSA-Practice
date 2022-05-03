// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> ans;
    vector<int> visited;
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        visited.resize(V, 0);
        bfs(0, adj);
        return ans;
    }
    
    void bfs(int node, vector<int> adj[]) {
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        
        while(q.size() != 0) {
            int fr = q.front();
            ans.push_back(fr);
            q.pop();
            for (auto i : adj[fr]) {
                if (!visited[i]) {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends