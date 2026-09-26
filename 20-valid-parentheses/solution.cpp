// 0 ms | 9 MB
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_set<char> closing_brackets = {')', '}', ']'};
        unordered_map<char, char> bracket_pairs = { {')', '('},
                                                    {'}', '{'},
                                                    {']', '['}
        };

        for(auto ch: s){
            if(auto b = closing_brackets.find(ch); b != closing_brackets.end()){
                if(st.empty()) return false;
                else {
                    if (bracket_pairs[ch] == st.top()) st.pop();
                    else return false;
                }
            }
            else{
                st.push(ch);
            }
        }

        return st.empty();
    }
};