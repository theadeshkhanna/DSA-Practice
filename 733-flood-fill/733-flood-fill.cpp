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