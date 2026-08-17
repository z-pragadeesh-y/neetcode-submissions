class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int b=0;
        int a;
        while(true){
             a=nums[b];
            int val=target-a;
            for(int i=b+1;i<nums.size();i++){
                if(nums[i]==val){
                    vector<int>v={b,i};
                    return v;
                    break;
                }

            }
            b++;

        }
    }
};
