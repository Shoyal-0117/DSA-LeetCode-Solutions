// 48 ms | 29.1 MB
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> set;
        sort(nums.begin(),nums.end());

        for(int i=0; i < nums.size()-1; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int l = i+1, r = nums.size()-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum > 0){
                    r--;
                }else if (sum < 0){
                    l++;
                }else{
                    set.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(l<r && nums[l] == nums[l-1]){
                        l++;
                    }
                }
            }
        }
        return set;
    }
};