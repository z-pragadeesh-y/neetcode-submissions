class Solution {
public:
    int findDuplicate(vector<int>& numbers) {
        unordered_set<int> s;

        for (int i = 0; i < numbers.size(); i++) {
            if (s.find(numbers[i]) != s.end()) {
                return numbers[i];
            }

            s.insert(numbers[i]);
        }

        return -1;
    }
};