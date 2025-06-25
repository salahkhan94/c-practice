#include <vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_sub = nums.size() + 1;
        int left = 0;
        int sum = 0;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while (sum >= target){
                min_sub = min(min_sub, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return (min_sub < nums.size() + 1) ? min_sub : 0;
    }
};


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_sub = nums.size() + 1;
        int sum = 0;
        int left = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while(sum >= target) {
                min_sub = min(min_sub, right-left+1);
                sum -= nums[left];
                left++;
            }
        }
        return (min_sub < (nums.size()+1)) ? min_sub : 0;

    }
};