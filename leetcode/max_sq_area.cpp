#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int max_area(vector<vector<int>>& land_area) {
            int area_max;
            for (int i = 0; i < land_area.size(); i++) {
                for (int j = 0; j < land_area[0].size(); j++) {
                    if (land_area[i][j] == 1) {
                        area_max = 1;
                        int col = j+1;
                        
                    }
                }
            }
        }
};