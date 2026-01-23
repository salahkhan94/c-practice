#include <vector>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currentend = 0;
        int furthest = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            furthest = max(furthest, nums[i] +i);
            if (i == currentend) {
                currentend = furthest;
                jumps++;
            }
        }
        return jumps;
    }
};


class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currentend = 0;
        int maxreach = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            maxreach = max(maxreach, nums[i] + i);
            if (i == currentend) {
                currentend = maxreach;
                jumps++;
            }
        }
        return jumps;
    }
};