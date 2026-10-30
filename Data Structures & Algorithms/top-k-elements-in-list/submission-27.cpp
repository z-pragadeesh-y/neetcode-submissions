class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     map<int,int>mp;
     for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
     }
     vector<int>ans;
     multimap<int,int>mp1;
     for(auto p:mp){
    mp1.insert({p.second, p.first});

     }
     for(auto it=mp1.rbegin();it!=mp1.rend();it++){
        if(k==0) break;
        ans.push_back(it->second);
        k--;
    
        
     }

     return ans;
    }
};
