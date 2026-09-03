// 4 ms | 21.8 MB
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int xor_0_To_n = 0;

        switch(n % 4){
            case 0 : xor_0_To_n = n; break;
            case 1 : xor_0_To_n = 1; break;
            case 2 : xor_0_To_n = n+1; break;
            case 3 : break;
        }

        return accumulate(nums.begin(),nums.end(),0,bit_xor<int>()) ^ xor_0_To_n;
    }
};