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
     int c=0;
     for(char i:result){
        if(i=='1') c++;
     }
     return c;
    }
};
