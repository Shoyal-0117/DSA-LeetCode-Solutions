// 0 ms | 8.6 MB
class Solution {
public:
    string backspace(string s){
        string new_str ;
        for(auto ch : s){
            if (ch != '#'){
                new_str += ch;
            }
            else{
                if(!new_str.empty()){
                    new_str.pop_back();
                }
            }
        }
        return new_str;
    }

    bool backspaceCompare(string s, string t) {
        return backspace(s) == backspace(t);
    }
};