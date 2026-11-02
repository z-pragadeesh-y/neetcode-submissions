class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0;
        while(a<=nums.size()){
        if(find(begin(nums), end(nums), a) == end(nums)){
            
               return a;
               

        }
        a++;
        }
    
        return -1;
    }
};
