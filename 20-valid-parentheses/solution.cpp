// 0 ms | 9 MB
class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2)
            return false;
        stack<char> st;
        unordered_map<char, char> match = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char ch : s) {
            if (match.count(ch)) {
                if (st.empty() || st.top() != match[ch])
                    return false;
                st.pop();
            } else {
                st.push(ch);
            }
        }
        return st.empty();
    }
};