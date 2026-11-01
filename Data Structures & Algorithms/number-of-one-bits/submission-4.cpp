class Solution {
public:
    int hammingWeight(uint32_t n) {
     string result="";
     while(n>0){
        int rem=n%2;
        int quo=n/2;
        result+=to_string(rem);
        n=quo;

     }
     
     reverse(begin(result),end(result));
    
     int c=count(begin(result),end(result),'1');
     return c;
    }
};
