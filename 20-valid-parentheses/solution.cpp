// 0 ms | 8.7 MB
class Solution {
public:
    bool isValid(string s) {
        
        if (s.size() % 2) return false;

        stack<char> st;
        for (auto ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else if ((ch == ')' || ch == '}' || ch == ']') && st.empty()) {
                return false;
            } else {
                if (ch == ')' && st.top() == '(') {
                    st.pop();
                } else if (ch == '}' && st.top() == '{') {
                    st.pop();
                } else if (ch == ']' && st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};