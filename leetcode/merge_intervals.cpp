#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b){
        return a[0] < b[0]; });

        int start = intervals[0][0];
        int end = intervals[0][1];
        vector<vector<int>> merged_intervals;

        for (auto & interval : intervals) {
            int cur_start = interval[0];
            int cur_end = interval[1];
            if (cur_start > end) {
                merged_intervals.push_back({start, end});
                start = cur_start;
            }
            end = max(end, cur_end);
        }
        merged_intervals.push_back({start, end});
        return merged_intervals;
    }
};

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>&a, const vector<int>&b) {
            return a[0] < b[0];
        } );
        
        int start = intervals[0][0];
        int end = intervals[0][1];

        vector<vector<int>> merged_intervals;

        for (const auto & interval : intervals) {
            int cur_start = interval[0];
            int cur_end = interval[1];

            if (cur_start > end) {
                merged_intervals.push_back({start, end});
                start = cur_start;
            }
            end = max(end, cur_end);
        }
        merged_intervals.push_back({start, end});
        return merged_intervals;
    }
};

