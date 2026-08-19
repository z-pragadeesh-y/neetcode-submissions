class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int longn=0;
        for(int x:nums){
           if(s.find(x-1)==s.end()){
            int curr=x;
            int len=1;
              while(s.find(curr+1)!=s.end()){
                len++;
                curr++;
              }
              longn=max(longn,len);
           }
        }
return longn;
    }
};
