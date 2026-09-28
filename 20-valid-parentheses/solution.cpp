// 0 ms | 8.8 MB
class Solution {
public:
    bool isValid(string s) {

        if (s.size() % 2)
            return false;

        stack<char> st;
        for (auto ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if ((ch == ')' || ch == '}' || ch == ']') && st.empty()) {
                    return false;
                }
                if (ch == ')' && st.top() != '(') {
                    return false;
                    ;
                }
                if (ch == '}' && st.top() != '{') {
                    return false;
                }
                if (ch == ']' && st.top() != '[') {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};