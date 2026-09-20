// 0 ms | 17.7 MB
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(), nums.end(), target);
        if (low == nums.end() || *low != target)
            return {-1, -1};
        auto high = upper_bound(nums.begin(), nums.end(), target) - 1;
        return {(int)(low - nums.begin()), (int)(high - nums.begin())};
    }
};