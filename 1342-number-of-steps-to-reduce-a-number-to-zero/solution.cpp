// 0 ms | 8 MB
class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while (num) {
            step++;
            if (num % 2 == 0)
                num /= 2;
            else
                num--;
        }
        return step;
    }
};