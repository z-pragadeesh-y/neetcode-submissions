class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // number -> frequency
        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        // frequency -> numbers
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto p : mp) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> ans;

        // highest frequency -> lowest frequency
        for (int freq = nums.size(); freq >= 1; freq--) {

            for (int x : bucket[freq]) {
                ans.push_back(x);

                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};