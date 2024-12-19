#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int threshold = (int)nums.size() / 2;
        for (int num : nums) {
            if (++freq[num] > threshold) {
                return num;
            }
        }
        return nums[0];
    }
};
