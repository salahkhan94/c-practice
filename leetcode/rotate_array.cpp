#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k = k % l;
        std::rotate(nums.begin(), nums.begin() + l - k, nums.end());
    }
};

class Solution2 {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k = k % l;
        vector<int> temp(nums.begin() + l - k, nums.end());

        for (int i = l - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        for (int i = 0; i < k ; i++) {
            nums[i] = temp[i];
        }
    }
};