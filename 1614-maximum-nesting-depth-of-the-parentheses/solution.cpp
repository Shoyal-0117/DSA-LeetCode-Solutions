// 0 ms | 8.4 MB
class Solution {
public:
    int maxDepth(string s) {
        int counter = 0, max_depth = 0;
        for(auto ch : s){
            if ( ch == '('){
                counter++;
            }
            if(ch == ')'){
                counter--;
            }
            max_depth = max(max_depth,counter);
        }
        return max_depth;
    }
};