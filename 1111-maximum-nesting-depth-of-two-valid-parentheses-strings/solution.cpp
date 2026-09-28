// 0 ms | 10.5 MB
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {

        vector<int> groups;
        int d = 0;

        for(auto ch : seq){

            if ( ch == '(') d++;

            groups.push_back(d%2);

            if ( ch != '(') d--;

        }
        return groups;
    }
};