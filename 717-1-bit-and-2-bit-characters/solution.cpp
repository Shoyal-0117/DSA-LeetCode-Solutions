// 0 ms | 13 MB
class Solution {
public:
// forward approach
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i = 0;
        while(i < n-1 ){
            (bits[i] == 1)? i+=2 : i+=1;
        }
        return i == n-1; 
    }
};