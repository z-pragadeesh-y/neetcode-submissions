class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string res=bitset<32>(n).to_string();
        uint32_t result=0;
        for(int i=0;i<res.length();i++){
            if(res[i]=='0') continue;
            result=result+pow(2,i);
        }

    return result;
    }
};
