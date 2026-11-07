class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n, 0);;
        stack<int>st;
        for(int i=0;i<n;i++){
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevDayIndex = st.top();
                st.pop();
                
                // Calculate how many days they waited
                ans[prevDayIndex] = i - prevDayIndex;
            }
            
            // Push today's index onto the stack
            st.push(i);
        }

        return ans;
        }
    
};
