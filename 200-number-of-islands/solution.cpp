// 28 ms | 24.5 MB
class Solution {
private:
    void bfs_land(int row, int col, vector<vector<int>>& visited, vector<vector<char>>& grid, int n, int m) {
        visited[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {
            int r = q.front().first, c = q.front().second;
            q.pop();

            for (int d = 0; d < 4; d++) {
                int new_row = r + dr[d], new_col = c + dc[d];

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m
                    && grid[new_row][new_col] == '1' && !visited[new_row][new_col]) {
                    visited[new_row][new_col] = 1;
                    q.push({new_row, new_col});
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int islands = 0;

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (!visited[row][col] && grid[row][col] == '1') {
                    islands++;
                    bfs_land(row, col, visited, grid, n, m);
                }
            }
        }
        return islands;
    }
};