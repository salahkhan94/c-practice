#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int left = i + 1;
            int right = nums.size() -1;
            int target = -nums[i];
            
            int cursum;

            while (left < right) {
                cursum = nums[left] + nums[right];

                if (cursum < target) left++; 
                else if (cursum > target) right--;
                else {
                    vector<int> triplet{nums[i], nums[left], nums[right]};
                    result.push_back(triplet);
                    
                    left++;
                    while (left < right && nums[left] == nums[left-1]) {
                        left++;
                    }

                    right--;
                    while (left < right && nums[right] == nums[right+1]) {
                        right--;
                    }

                }   
            }
        }
        return result;
    }
};