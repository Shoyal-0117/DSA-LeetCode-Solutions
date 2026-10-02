// 2 ms | 13.3 MB
class Solution {
public:
    vector<string> result;

    void backtrack(string& curr, int n, int open, int close){
        if(curr.length() == 2*n) {
            result.push_back(curr);
            return;
        }

        if(open < n) {
            curr.push_back('(');
            backtrack(curr, n, open+1, close);
            curr.pop_back();
        }

        if(close < open) {
            curr.push_back(')');
            backtrack(curr, n, open, close+1);
            curr.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {
        string curr = "";

        int open=0, close=0;

        backtrack(curr, n, open, close);

        return result;
    }
};