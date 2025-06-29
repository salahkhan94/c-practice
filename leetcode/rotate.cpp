#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int c = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = c;
            }
        }
        for (int i = 0; i < n; i++) {
            std::reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int c = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = c;
            }
        }
        for (int i = 0; i < n; i++) {
            std::reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};