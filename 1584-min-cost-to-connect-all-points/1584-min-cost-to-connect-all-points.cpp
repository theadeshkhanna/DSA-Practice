// class Solution {
// private: 
//     bool static comparater(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2) {
//         return p1.first < p2.first;
//     }
    
//     int findParent(int v ,vector<int>& parent) {
//         if (parent[v] < 0) return v;
//         return parent[v] = findParent(parent[v], parent);
//     }
    
//     int minCost(vector<pair<int, pair<int, int>>> graph) {
//         vector<int> parent;
//         int sum = 0;
        
//         for (int i = 0; i < graph.size(); i++) {
//             parent.push_back(-1);
//         }
        
//         for (int i = 0; i < graph.size(); i++) {
//             int v1 = graph[i].second.first;
//             int v2 = graph[i].second.second;
                        
//             int p1 = findParent(v1, parent);
//             int p2 = findParent(v2, parent);
            
            
//             if (p1 != p2) {
//                 sum += graph[i].first;
//                 parent[v1] = v2;
//             }            
//         }
        
//         return sum;
//     }
// public:
//     int minCostConnectPoints(vector<vector<int>>& points) {
//         vector<pair<int, pair<int, int>>> graph;
        
//         int n = points.size();
        
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
                
//                 int wt = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
//                 graph.push_back({wt, {i, j}});
//             }
//         }
        
//         sort(graph.begin(), graph.end(), comparater);
        
//         return minCost(graph);
//     }
// };

class Solution {
public:
    int par[1001];
    
    int find(int a) {
        if (par[a] < 0) return a;
        return par[a] = find(par[a]);
    }
    
    void Union(int a, int b) {
        par[a] = b;
    }
    
    int minCostConnectPoints(vector<vector<int>>& arr) {
        int n = arr.size();
        
        for(int i = 0; i < n; i++) par[i] = -1;
        
        vector<pair<int, pair<int, int>>> adj;
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int weight = abs(arr[i][0] - arr[j][0]) + 
                             abs(arr[i][1] - arr[j][1]);
                
                adj.push_back({weight, {i, j}});
            }
        }
        
        sort(adj.begin(), adj.end());
        int sum = 0;
        
        for(int i = 0; i < adj.size(); i++)
        {
            int a = find(adj[i].second.first);
            int b = find(adj[i].second.second);
            
            if(a != b) {
                sum += adj[i].first;
                Union(a, b);
            }
        }
        
        return sum;
    }
};