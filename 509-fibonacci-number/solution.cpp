// 1 ms | 8.3 MB
class Solution {
public:
    int fib_naive(int n) {
        if (n == 0 || n == 1) return n;

        if(mp.find(n) != mp.end()){
            return mp[n];
        }

        mp[n] = fib_naive(n-1) + fib_naive(n-2);
        return mp[n];
    }

    unordered_map<int,int> mp;

    int fib(int n){;
       return fib_naive(n);
    }
};