// 29 ms | 16.4 MB
class Solution {
private:
    void dfs_land(vector<vector<char>>& grid, int row, int col, int n, int m) {
        if (row < 0 || col < 0 || row == n || col == m || grid[row][col] != '1') return;

        grid[row][col] = '0';

        dfs_land(grid, row-1, col, n, m);
        dfs_land(grid, row+1, col, n, m);
        dfs_land(grid, row, col+1, n, m);
        dfs_land(grid, row, col-1, n, m);
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (grid[row][col] == '1') {
                    islands++;
                    dfs_land(grid, row, col, n, m);
                }
            }
        }
        return islands;
    }
};