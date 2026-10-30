class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n=nums.size();
         vector<int> ans;
          vector<int> left;
          int dummy=1;
          for(int i=0;i<n;i++){
             dummy=dummy*nums[i];
             left.push_back(dummy);
          }
          
          vector<int>right;
          int dummyy=1;
          
          for(int i=n-1;i>=0;i--){
            dummyy=dummyy*nums[i];
            right.push_back(dummyy);
          }
         reverse(right.begin(), right.end());
        for (int i = 0; i < n; i++) {
    if (i == 0)
        ans.push_back(right[i+1]);
    else if (i == n-1)
        ans.push_back(left[i-1]);
    else
        ans.push_back(left[i-1] * right[i+1]);
}
return ans;
    }
};
