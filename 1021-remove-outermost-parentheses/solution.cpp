// 0 ms | 9 MB
class Solution {
public:
    string removeOuterParentheses(string s) {
        // Dyck Path
        string res;
        int lvl = 0;
        
        for (auto& c : s)
            if ((c == '(' && lvl++) || (c == ')' && --lvl))
                res += c;

        return res;
    }
};