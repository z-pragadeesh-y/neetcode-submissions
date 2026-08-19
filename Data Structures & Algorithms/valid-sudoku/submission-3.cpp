class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        set<char> rows[9];
        set<char> cols[9];
        set<char> boxes[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.')
                    continue;

                char num = board[i][j];

                // box number: 0 to 8
                int box = (i / 3) * 3 + (j / 3);

                // already exists?
                if (rows[i].count(num) ||
                    cols[j].count(num) ||
                    boxes[box].count(num)) {
                    return false;
                }

                // add it
                rows[i].insert(num);
                cols[j].insert(num);
                boxes[box].insert(num);
            }
        }

        return true;
    }
};