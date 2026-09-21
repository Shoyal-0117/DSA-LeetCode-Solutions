// 0 ms | 11.3 MB
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        for( auto& row : accounts){
            richest = max(richest,accumulate(row.begin(),row.end(),0));
        }
        return richest;
    }
};