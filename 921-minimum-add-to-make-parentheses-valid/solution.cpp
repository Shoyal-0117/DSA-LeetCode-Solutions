// 0 ms | 8.5 MB
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(auto ch : s){
            if( ch == '('){
                st.push(ch);
            }
            if( ch == ')' && (st.empty()||st.top() != '(')){
                st.push(ch);
            }
            if( ch == ')' && st.top() == '('){
                st.pop();
            }
        }
        return st.size();
    }
};