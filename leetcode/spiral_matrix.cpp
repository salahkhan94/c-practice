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


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int top = 0;
        int bottom = rows-1;

        int left = 0;
        int right = cols-1;

        while(left<=right && top <= bottom) {
            for (int i = left; i < right+1; i++) {
                spiral.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i < bottom+1; i++) {
                spiral.push_back(matrix[i][right]);
            }
            right--;

            if (left<=right && top <= bottom) {
                for(int i = right; i > left-1; i--) {
                    spiral.push_back(matrix[bottom][i]);
                }
            }
            bottom--;
            if (left<=right && top <= bottom) {
                for(int i = bottom; i > top-1; i--) {
                    spiral.push_back(matrix[i][left]);
                }
            }
            left++;
        }
        return spiral;
    }
};