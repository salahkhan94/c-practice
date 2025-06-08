#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[k-1]) {
                nums[k] = nums[i];
                k++;
            }
            else if (nums[i] == nums[k-1] && (k == 1 || nums[i] != nums[k-2])) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

class Solution2 {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int x : nums) {
            if (k < 2 || x > nums[k-2]) {
                nums[k] = x;
                k++;
            }
        }
        return k;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int x : nums) {
            if (k < 2 || x > nums[k-2] ) {
                nums[k] = x;
                k++;
            }
        }
        return k;
    }
};