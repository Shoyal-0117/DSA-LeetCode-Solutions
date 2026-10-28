// 0 ms | 7.9 MB
class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while (num) {
            step++;
            if (num & 1)
                num--;
            else
                num >>= 1;
        }
        return step;
    }
};