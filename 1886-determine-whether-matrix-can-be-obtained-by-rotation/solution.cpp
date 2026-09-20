// 0 ms | 14.7 MB
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
            for (int j = i+1; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);
        for (auto& r : matrix) reverse(r.begin(), r.end());
    }
    
    bool isEqual(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (a[i][j] != b[i][j]) return false;
        return true;
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int turn = 0; turn < 4; turn++) {
            if (isEqual(mat, target)) return true;
            rotate(mat);
        }
        return false;
    }
};