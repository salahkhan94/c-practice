#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        vector<int> contiguous;
        for (int i = 0; i < nums.size(); i++) {
            
            if (i == 0) {
                contiguous.push_back(nums[i]);
            }
            else if (nums[i]-nums[i-1] == 1) {
                contiguous.push_back(nums[i]);
            }
            else if (contiguous.size() == 1){
                string range = to_string(contiguous[0]);
                output.push_back(range);
                contiguous.erase(contiguous.begin(), contiguous.end());
                contiguous.push_back(nums[i]);
            }
            else {
                string range = to_string(contiguous[0]);
                range += "->";
                range += to_string(contiguous.back());
                output.push_back(range);
                contiguous.erase(contiguous.begin(), contiguous.end());
                contiguous.push_back(nums[i]);
            }
        }
        if (contiguous.size() == 1){
            string range = to_string(contiguous[0]);
            output.push_back(range);
        }
        else if (contiguous.size() > 1){
            string range = to_string(contiguous[0]);
            range += "->";
            range += to_string(contiguous.back());
            output.push_back(range);
        }

        return output;
    }
};

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        vector<int> contiguous;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                contiguous.push_back(nums[i]);
            }

            else if ((long long)nums[i] - (long long)nums[i - 1] == 1LL) {
                contiguous.push_back(nums[i]);
            }
            else {

                if (contiguous.size() == 1) {
                    output.push_back(to_string(contiguous[0]));
                }
                else {

                    output.push_back(to_string(contiguous[0]) + "->" + to_string(contiguous.back()));
                }
                contiguous.clear();
                contiguous.push_back(nums[i]);
            }
        }
        
        if (!contiguous.empty()) {
            if (contiguous.size() == 1) {
                output.push_back(to_string(contiguous[0]));
            } else {
                output.push_back(to_string(contiguous[0]) + "->" + to_string(contiguous.back()));
            }
        }

        return output;
    }
};


class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        vector<int> contiguous;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                contiguous.push_back(nums[i]);
            }
            else if ((long long)nums[i] - (long long)nums[i-1] == 1LL) {
                contiguous.push_back(nums[i]);
            }
            else {
                if (contiguous.size() == 1) {
                    output.push_back(to_string(contiguous[0]));
                }
                else {
                    string out = to_string(contiguous[0]) + "->" + to_string(contiguous.back());
                    output.push_back(out);
                }
                contiguous.clear();
                contiguous.push_back(nums[i]);
            }
        }

        if (contiguous.size() != 0) {
            if (contiguous.size() == 1) {
                output.push_back(to_string(contiguous[0]));
            }
            else {
                string out = to_string(contiguous[0]) + "->" + to_string(contiguous.back());
                output.push_back(out);
            }
        }

        return output;
    }
};
