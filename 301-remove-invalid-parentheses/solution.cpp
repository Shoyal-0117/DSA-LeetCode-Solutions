// 1673 ms | 796 MB
class Solution {
public:
    unordered_set<string> ans;

    void backtrack(string& s, int index, int leftRemove, int rightRemove, int balance, string current) {    
        // Finished processing the string
        if (index == s.size()) {
            if (leftRemove == 0 && rightRemove == 0 && balance == 0) {
                ans.insert(current);
            }
            return;
        }

        char ch = s[index];

        if (ch == '(') {
            // Remove '('
            if (leftRemove > 0) {
                backtrack(s, index + 1, leftRemove - 1, rightRemove, balance, current);
            }
            // Keep '('
            backtrack(s, index + 1, leftRemove, rightRemove, balance + 1, current + ch);
        }
        else if (ch == ')') {
            // Remove ')'
            if (rightRemove > 0) {
                backtrack(s, index + 1, leftRemove, rightRemove - 1, balance, current);
            }
            // Keep ')' only if it has a matching '('
            if (balance > 0) {
                backtrack(s, index + 1, leftRemove, rightRemove, balance - 1, current + ch);
            }
        }
        else {
            backtrack(s, index + 1, leftRemove, rightRemove, balance, current + ch);
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        int leftRemove = 0;
        int rightRemove = 0;
        // Find minimum number of removals
        for (char ch : s) {
            if (ch == '(') {
                leftRemove++;
            }
            else if (ch == ')') {
                if (leftRemove > 0)
                    leftRemove--;
                else
                    rightRemove++;
            }
        }
        // Start backtracking
        backtrack(s, 0, leftRemove, rightRemove, 0, "");
        return vector<string>(ans.begin(), ans.end());
    }
};