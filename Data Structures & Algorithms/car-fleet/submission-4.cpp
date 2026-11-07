class Solution {
    stack<double>st;
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        map<int, int> cars;
        for (int i = 0; i < n; i++) {
            cars[position[i]] = speed[i];
        }
        for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
            int pos = it->first;
            int spd = it->second;
            
            // Calculate time with float division
            double time = (double)(target - pos) / spd;
      if (st.empty() || time > st.top()) {
                st.push(time); // New fleet
            }

 }
        
        return st.size(); // The number of fleets is the size of the stack
    }
};
