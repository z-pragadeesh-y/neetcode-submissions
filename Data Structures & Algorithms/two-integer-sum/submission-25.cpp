class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for (int i=0;i<nums.size();i++){
            int g=target-nums[i];
            if(mp.find(g)!=mp.end()){
                 return {mp[g],i};
            }
            else{
                mp.insert({nums[i],i});
            }
        }
    }
};
