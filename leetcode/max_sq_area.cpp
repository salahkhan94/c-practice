#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int max_area(vector<vector<int>>& land) {
            int area_max;
            for (int i = 0; i < land.size(); i++) {
                for (int j = 0; j < land[0].size(); j++) {
                    if (land[i][j] == 1) {
                        area_max = 1;
                        int increment = 0;
                        int col;
                        int row;
                        while(land[row][col]) {
                            for (row = i; row < i + increment; row++) {
                                
                            }
                            while() {

                            }
                        }

                    }
                }
            }
        }
};