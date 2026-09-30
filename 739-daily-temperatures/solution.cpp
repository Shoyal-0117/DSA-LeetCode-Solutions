// 21 ms | 102.8 MB
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> days(temperatures.size(),0);
        stack<int> st;
        for(int i=temperatures.size()-1; i >= 0 ; i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            if(st.empty()){
                days[i] = 0;
            }else{
                days[i] = st.top() - i;
            }
            st.push(i);
        }
        return days;
    }
};