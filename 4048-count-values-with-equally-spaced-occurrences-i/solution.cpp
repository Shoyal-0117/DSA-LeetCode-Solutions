// 11 ms | 30.8 MB
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int distinct  = 0;
        set<int> s(nums.begin(),nums.end());
        for(int x : s){
            if( count(nums.begin(),nums.end(),x) == 3){
                vector<int> indices;
                for(int i=0; i < nums.size(); i++){
                    if(nums[i] == x){
                        indices.push_back(i);
                    }
                }
                if(indices[1]-indices[0] == indices[2]-indices[1]){
                    distinct ++;
                }
            }
        }
        return distinct ;
    }
};