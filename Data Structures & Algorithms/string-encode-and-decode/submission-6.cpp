class Solution {
public:

    string encode(vector<string>& strs) {
            string encode="";
            
            for(string i: strs){
                int n=i.length();
                encode+=to_string(n)+"#";
                encode+=i;

            } 
            
            return encode;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        int len=s.length();
        int i=0;
        int currentnum=0;
        while(i<len){
            while(s[i]!='#'){
                currentnum=currentnum*10+(s[i]-'0');
                i++;
            }
            i++;
            string word="";
            while(currentnum>0){
                word+=s[i];
                i++;
                currentnum--;
            }
            ans.push_back(word);
               
    }
               return ans;}
};
