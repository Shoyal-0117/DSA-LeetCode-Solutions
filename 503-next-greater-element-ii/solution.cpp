// 3 ms | 28.5 MB
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size(),i;
        vector<int> NGE(n,-1);
        stack<int> st;
        for(i = 2*n -1; i >=0; i--){
            int actual_index = i%n;
            while(!st.empty() && nums[st.top()] <= nums[actual_index]){
                st.pop();
            }
            if(!st.empty()){
                NGE[actual_index] = nums[st.top()];
            }
            st.push(actual_index);
        }
        return NGE;
    }
};