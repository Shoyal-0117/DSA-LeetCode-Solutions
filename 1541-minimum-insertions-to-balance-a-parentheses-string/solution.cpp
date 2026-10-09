// 3 ms | 15.5 MB
class Solution {
public:
    int minInsertions(string s) {
        int i = 0, n = s.length(), balance = 0, insertion = 0;

        while (i < n) {
            if (s[i] == '(') {
                balance++;
                i++;
            } else {
                if (balance > 0) {
                    balance--;
                } else {
                    insertion++;
                }

                if (i + 1 < n && s[i+1] == ')') {
                    i += 2;
                } else {
                    insertion++;
                    i++;
                }
            }
        }
        return insertion + balance * 2;
    }
};