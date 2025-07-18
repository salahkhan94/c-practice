#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstrz = false;
        bool firstcz = false;

        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            if(matrix[i][0] == 0)
                firstcz = true;
        }
        for (int i = 0; i < n; i++) {
            if(matrix[0][i] == 0) 
                firstrz = true;
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = 1; i < m; i++) {
            if(matrix[i][0] == 0) {
                for (int j = 1; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int i = 1; i < n; i++) {
            if(matrix[0][i] == 0) {
                for (int j = 1; j < m; j++) {
                    matrix[j][i] = 0;
                }
            }
        }

        if (firstrz) {
            for (int i = 0; i < n; i++) {
                matrix[0][i] = 0;
            }
        }
        if(firstcz) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> cols, rows;
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        for (const auto& row: rows) {
            for (int i = 0; i < n; i++) {
                matrix[row][i] = 0;
            }
        }

        for (const auto& col: cols) {
            for (int i = 0; i < m; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};