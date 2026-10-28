// 0 ms | 8.6 MB
class Solution {
public:
    double power(double x, long long n) {
        if (n == 0)
            return 1;
        double half = power(x, n / 2);

        if (n % 2 == 0)
            return (half * half);

        return (x * half * half);
    }

    double myPow(double x, long long int n) {
        if (n > 0)
            return power(x, n);
        return (1 / power(x, -n));
    }
};