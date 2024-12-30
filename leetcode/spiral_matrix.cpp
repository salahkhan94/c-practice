#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;

        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0;
        int right = n - 1;
        int top = 0;
        int bottom = m - 1;

        while (top <= bottom && left <= right) {

            for (int col = left; col < right + 1; col++) {
                spiral.push_back(matrix[top][col]);
            }
            top++;

            for (int row = top; row < bottom + 1; row++) {
                spiral.push_back(matrix[row][right]);
            }
            right--;

            if (top <= bottom && left <= right) {
                for (int col = right; col > left - 1; col--) {
                    spiral.push_back(matrix[bottom][col]);
                }
                bottom--;
            }

            if (top <= bottom && left <= right) {
                for (int row = bottom; row > top-1; row--) {
                    spiral.push_back(matrix[row][left]);
                }
                left++;
            }

        }
        return spiral;
    }
};