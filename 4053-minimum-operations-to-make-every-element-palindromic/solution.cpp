// 103 ms | 144.6 MB
class Solution {
public:


    long long find_closest(const vector<long long>& A, const long long a)
    {
        const auto lb = std::lower_bound(A.begin(), A.end(), a);
        int ans = lb!= A.end() ? *lb : A.back();
        if (lb != A.begin()) {
            auto prec = lb - 1;
            if (abs(ans - a) > abs(*prec - a))
                ans = *prec;
        }

        return ans;
    }


    inline static bool computed = false;
    inline static vector<long long> odd_palindromes, even_palindromes;

    void preComputePalindromes() {
        if (computed) return;

        for (int i = 1; i <= 1e4; i++){
            auto s = to_string(i);
            string r = s;
            reverse(r.begin(), r.end());

            vector<string> arr = {"","0","1","2","3","4","5","6","7","8","9"};
            for(int j=0;j<11;j++){
                long long val = stoll(s+arr[j]+r);
                if(val > 1e9)continue;
                if(val % 2 == 0) even_palindromes.push_back(val);
                else odd_palindromes.push_back(val);
            }
        }

        for(int i=1;i<10;i++){
            if(i%2 == 0) even_palindromes.push_back(i);
            else odd_palindromes.push_back(i);
        }

        sort(even_palindromes.begin(),even_palindromes.end());
        sort(odd_palindromes.begin(),odd_palindromes.end());

        computed = true;
    }

    
    long long minOperations(vector<int>& nums) {
        long long total = 0;

        preComputePalindromes();

        for(int num : nums){
            if (num % 2 == 0) {
                auto closest = find_closest(even_palindromes, num);
                auto steps = abs(closest - num) / 2;   
                total += steps;      
            }
            else {
                auto closest = find_closest(odd_palindromes, num);
                auto steps = abs(closest - num) / 2;   
                total += steps;   
            } 
        }

        return total;
    }
};