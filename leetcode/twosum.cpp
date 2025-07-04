#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() -1;

        while (left < right) {
            int cursum = numbers[left] + numbers[right];

            if (cursum < target) left++;
            else if (cursum > target) right--;
        }

        vector<int> ans{left+1, right+1};
        return ans;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() -1;
        int cursum = numbers[left] + numbers[right];
        while (cursum != target) {
            cursum = numbers[left] + numbers[right];

            if (cursum < target) left++;
            else if (cursum > target) right--;
        }
        return {left+1, right+1};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;
        int cursum = numbers[l] + numbers[r];
        while (cursum != target) {
            cursum = numbers[l] + numbers[r];
            if (cursum > target) r--;
            else if (cursum < target) l++;
        }
        return {l+1, r+1};
    }
};