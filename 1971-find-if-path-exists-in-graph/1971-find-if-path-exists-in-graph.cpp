class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        vector<vector<int>> graph(n);
        for (int i = 0; i < edges.size(); i++) {
            int v1 = edges[i][0];
            int v2 = edges[i][1];
            
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        
        vector<bool> visited(n, false);
        
        queue<int> q;
        q.push(s);
        
        while(q.size() != 0) {
            int front = q.front();
            q.pop();
            
            if (visited[front]) continue;
            if (front == d) return true;
            
            visited[front] = true;
            
            for (int i = 0; i < graph[front].size(); i++) {
                q.push(graph[front][i]);
            }
        }
        
        return false;
    }
};