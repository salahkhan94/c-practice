#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

class Solution2 {
public:
    int removeElement(vector<int>& nums, int val) {
        auto newend = std::remove(nums.begin(), nums.end(), val);
        return static_cast<int>(std::distance(nums.begin(), newend));
    }
};