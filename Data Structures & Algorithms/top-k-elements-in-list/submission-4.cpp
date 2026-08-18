class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        
        map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        
        multimap<int, int> freq;

        for (auto p : mp) {
            freq.insert({p.second, p.first});
        }

        vector<int> ans;

        int count = 0;

        for (auto it = freq.rbegin(); it != freq.rend(); ++it) {

            if (count == k)
                break;

            ans.push_back(it->second);
            count++;
        }

        return ans;
    }
};