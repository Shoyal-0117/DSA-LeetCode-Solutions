// 3 ms | 18.7 MB
class Solution {
private:
    void dfs(vector<vector<int>>& grid, int row, int col, int oldColor, int newColor) {
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size()) return;
        if (grid[row][col] != oldColor) return;

        grid[row][col] = newColor;

        dfs(grid, row+1, col, oldColor, newColor);
        dfs(grid, row-1, col, oldColor, newColor);
        dfs(grid, row, col+1, oldColor, newColor);
        dfs(grid, row, col-1, oldColor, newColor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old_color = image[sr][sc];
        if (old_color == color) return image;
        dfs(image, sr, sc, old_color, color);
        return image;
    }
};