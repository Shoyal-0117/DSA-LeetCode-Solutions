// 0 ms | 10 MB
class Solution {
public:
    void T_matrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        T_matrix(matrix);
        for (auto& r : matrix) {
            reverse(r.begin(), r.end());
        }
    }
};