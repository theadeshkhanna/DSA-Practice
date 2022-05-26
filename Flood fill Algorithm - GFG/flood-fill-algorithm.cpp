// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void dfs(int x, int y, vector<vector<int>>& image, int sr, int sc, vector<vector<int>>& vis, int newColor, int oldColor) {
        if (x < 0 || y < 0 || x >= sr || y >= sc) return;
        if (vis[x][y] || image[x][y] != oldColor) return;
        
        vis[x][y] = 1;
        image[x][y] = newColor;
        
        dfs(x + 1, y, image, sr, sc, vis, newColor, oldColor);
        dfs(x - 1, y, image, sr, sc, vis, newColor, oldColor);
        dfs(x, y + 1, image, sr, sc, vis, newColor, oldColor);
        dfs(x, y - 1, image, sr, sc, vis, newColor, oldColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int x = image.size();
        int y = image[0].size();
        int oldColor = image[sr][sc];
        
        vector<vector<int>> vis(x, vector<int>(y, 0));
        dfs(sr, sc, image, x, y, vis, newColor, oldColor);
        return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends