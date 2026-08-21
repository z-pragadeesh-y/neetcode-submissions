class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a=0;
        int b=numbers.size()-1;
        vector<int>ans;
        while(true){
             int sum=numbers[a]+numbers[b];
             if(sum==target){
                return{a+1,b+1};
             }
             else if(sum>target){
                b--;
             }
             else{
                a++;
             }
        }
       
    }
};
