class Solution {
public:
    bool isPalindrome(string s) {
        int a = 0;
        int b = s.length() - 1;

        while (a < b) {

            while (a < b && !isalnum(s[a])) {
                a++;
            }

            while (a < b && !isalnum(s[b])) {
                b--;
            }

            char left = s[a];
            char right = s[b];

            if (tolower(left) != tolower(right)) {
                return false;
            }

            a++;
            b--;
        }

        return true;
    }
};