class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int a=i;
            int c=0;
            while(a>0){
                   if(a&1) c++;
                  a= a>>1;
            }
            ans.push_back(c);
        }
        return ans;
    }
};
