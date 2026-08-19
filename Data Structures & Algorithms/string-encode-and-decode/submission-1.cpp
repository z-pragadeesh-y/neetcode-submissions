class Solution {
public:

    string encode(vector<string>& strs) {
     string encoded = "";

    for (string s : strs) {
        encoded += to_string(s.length()) + "#" + s;
    }

    return encoded;
    }

   vector<string> decode(string s) {
    vector<string> ans;

    int i = 0;

    while (i < s.size()) {

        int len = 0;

        // Read the number
        while (s[i] != '#') {
            len = len * 10 + (s[i] - '0');
            i++;
        }

        i++;  // skip #

        // Take 'len' characters
        string word = "";

        for (int k = 0; k < len; k++) {
            word += s[i];
            i++;
        }

        ans.push_back(word);
    }

    return ans;
}
};
