// 217 ms | 293.8 MB
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int distinct = 0;
        unordered_map<int,vector<int>> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        for(auto& [x,indices] : mp){
            if(indices.size() < 3){
                continue;
            }
            int temp = indices[1] - indices[0];
            bool flag = true;
            for(int i =1 ; i < indices.size()-1; i++){
                if(indices[i+1] - indices[i] != temp){
                    flag = false;
                    break;
                }
            }
            if(flag){
                distinct++;
            }
        }
        return distinct;
    }
};