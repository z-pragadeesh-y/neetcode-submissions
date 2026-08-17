class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char>s1;
        multiset<char>t1;
        int n1=s.length();
        int n2=t.length();
        if (n1 !=n2)
            return false;
        for(int i=0;i<n1;i++){
            s1.insert(s[i]);
        }
        for(int i=0;i<n2;i++){
            t1.insert(t[i]);
        }
        if(s1==t1){
            return true;
        }
        return false;
    }
};
