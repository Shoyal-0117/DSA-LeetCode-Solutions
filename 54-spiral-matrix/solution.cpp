// 0 ms | 9.5 MB
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();

        int l = 0, r = n - 1;
        int t = 0, b = m - 1;

        vector<int> spiral;
        spiral.reserve(n * m);

        while (l <= r && t <= b) {
            for (int i = l; i <= r; i++) {
                spiral.push_back(matrix[t][i]);
            }
            t++;
            for (int i = t; i <= b; i++) {
                spiral.push_back(matrix[i][r]);
            }
            r--;
            if (t <= b) {
                for (int i = r; i >= l; i--) {
                    spiral.push_back(matrix[b][i]);
                }
                b--;
            }
            if (l <= r) {
                for (int i = b; i >= t; i--) {
                    spiral.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return spiral;
    }
};