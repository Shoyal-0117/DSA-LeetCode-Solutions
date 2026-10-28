// 2 ms | 8.4 MB
class Solution {
public:
    int fibo(int n) {
        if (n == 0 || n == 1) return n;

        if(mp.find(n) != mp.end()){
            return mp[n];
        }

        mp[n] = fibo(n-1) + fibo(n-2);
        return mp[n];
    }

    unordered_map<int,int> mp;

    int fib(int n){;
       return fibo(n);
    }
};