// 0 ms | 27.3 MB
class Solution {
public:
    void reverser(vector<char>& s, int begin, int end){
        if(begin >= end) return;
        swap(s[begin],s[end]);
        reverser(s, begin+1,end-1);
    }
    
    void reverseString(vector<char>& s){
      reverser(s, 0, s.size()-1) ;
    } 
};