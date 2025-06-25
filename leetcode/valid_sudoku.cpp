#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9), col(9), box(9);


        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int val = board[i][j];
                
                if (val == '.') continue;

                if (row[i].find(val) != row[i].end()) return false;
                row[i].insert(val);

                if (col[j].find(val) != col[j].end()) return false;
                col[j].insert(val);

                int box_idx = ((i/3) * 3) + (j/3);
                
                if (box[box_idx].find(val) != box[box_idx].end()) return false;
                box[box_idx].insert(val);

            }
        }

        return true;
    }
};


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9), col(9), box(9);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val == '.') continue;
                
                if (row[i].find(val) != row[i].end()) return false;
                row[i].insert(val);

                if (col[j].find(val) != col[j].end()) return false;
                col[j].insert(val);

                int box_idx = ((i/3) * 3 ) + (j/3);

                if (box[box_idx].find(val) != box[box_idx].end()) return false;
                box[box_idx].insert(val);

            }
        }
        return true;
    }
};