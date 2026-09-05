// 0 ms | 36.3 MB
class Solution {
public:
    vector<int> get_prefixSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefixsum(n + 1, 0);
        for (int i = 0; i < n; i++)
            prefixsum[i + 1] = prefixsum[i] + arr[i];
        return prefixsum;
    }
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSumArr = get_prefixSum(nums);
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int leftSum = prefixSumArr[i];
            int rightSum = prefixSumArr[n] - prefixSumArr[i+1];
            if (leftSum == rightSum) {
                return i;
            }
        }
        return -1;
    }
};