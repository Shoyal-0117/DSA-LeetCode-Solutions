// 0 ms | 13.1 MB
// Backward approach — count trailing ones before the guaranteed final 0
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int j = n - 2;               // skip the final 0
        int ones = 0;
        while (j >= 0 && bits[j] == 1) {
            ones++;
            j--;
        }
        return ones % 2 == 0;        // even run → pairs fuse → final 0 is free
    }
};