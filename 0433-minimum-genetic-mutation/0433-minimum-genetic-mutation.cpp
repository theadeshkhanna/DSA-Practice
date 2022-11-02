class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string> q;
        unordered_set<string> visited;
        
        q.push(start);
        visited.insert(start);
        
        int count = 0;
        
        while(!q.empty()) {
            int n = q.size();
            
            for (int i = 0; i < n; i++) {
                string node = q.front();
                q.pop();
            
                if (node == end) {
                    return count;
                }
                
                for (char c: "ACGT") {
                    for (int j = 0; j < node.size(); j++) {
                        
                        string fake = node;
                        fake[j] = c;
                        
                        if (
                            !visited.count(fake) &&
                            find(bank.begin(), bank.end(), fake) != bank.end()
                        ) {
                            q.push(fake);
                            visited.insert(fake);
                        }
                    }
                }
            }
            
            count++;
        }
        
        return -1;
    }
};