#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reach = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > max_reach) return false;

            max_reach = std::max(max_reach, nums[i] + i);

            if (max_reach >= nums.size()-1) return true;
        }
        return false;
    }
};