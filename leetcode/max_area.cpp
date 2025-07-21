#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;

        int maxarea = 0;

        while (left < right) {
            int cwidth = right-left;
            int cheight = min(height[right], height[left]);
            maxarea  = max(maxarea, cwidth * cheight);

            if(height[right] > height[left]) left += 1;
            else right -= 1;
        }
        return maxarea;
    }
};

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;

        int maxarea = 0;

        while (left < right) {
            int cwidth = right-left;
            int cheight = min(height[right], height[left]);
            maxarea  = max(maxarea, cwidth * cheight);

            if(height[right] > height[left]) left += 1;
            else right -= 1;
        }
        return maxarea;
    }
};