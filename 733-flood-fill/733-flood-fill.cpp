class Solution {
public:
    
    void dfs(vector<vector<int>> &image, int r, int c, int stdColor, int newColor) {    
        if (r < 0 || c < 0 || r >= image.size() || c >= image[0].size() || image[r][c] != stdColor || image[r][c] == newColor) {
            return;
        }
        image[r][c] = newColor;
        dfs(image, r-1, c, stdColor, newColor);
        dfs(image, r+1, c, stdColor, newColor);
        dfs(image, r, c-1, stdColor, newColor);
        dfs(image, r, c+1, stdColor, newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image, sr, sc, image[sr][sc], color);
        
        return image;
    }
};