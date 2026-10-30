class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int> s;

        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }

        int maxlen = 0;

        for(auto x : s) {

            if(s.find(x - 1) == s.end()) {

                int current = x;
                int count = 1;

                while(s.find(current + 1) != s.end()) {
                    current++;
                    count++;
                }

                maxlen = max(maxlen, count);
            }
        }

        return maxlen;
    }
};