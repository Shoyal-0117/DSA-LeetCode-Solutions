// 0 ms | 21.8 MB
class Solution {
public:
    int Xor(int n){
        int result = 0;
        switch(n % 4){
            case 0 : result = n; break;
            case 1 : result = 1; break;
            case 2 : result = n+1; break;
            case 3 : break;
        }
        return result;
    }
    int missingNumber(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0,bit_xor<int>()) ^ Xor(nums.size());
    }
};