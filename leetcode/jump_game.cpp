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

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(i > maxreach) return false;
            maxreach = std::max(maxreach, i + nums[i]);
            if(maxreach >= nums.size()-1) return true;
            
        }
        return false;
    }
};


class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int max_reach = nums[0];
            for (int i = 0; i < nums.size(); i++) {
                max_reach = max(max_reach, i + nums[i]);
                if (i > max_reach) return false;
                if (max_reach >= nums.size()-1) return true;
            }
            return false;
        }
};