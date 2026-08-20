class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans(nums.size());
        vector<int> leftproduct(nums.size());
        vector<int> rightproduct(nums.size());

        int left = 1;
        int right = 1;


        for(int i = 0; i < nums.size(); i++) {
            leftproduct[i] = left;
            left = left * nums[i];
        }

        
        for(int i = nums.size() - 1; i >= 0; i--) {
            rightproduct[i] = right;
            right = right * nums[i];
        }

        
        for(int i = 0; i < nums.size(); i++) {
            ans[i] = leftproduct[i] * rightproduct[i];
        }

        return ans;
    }
};