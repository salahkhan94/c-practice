#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const std::vector<int>& a, const std::vector<int>& b){
        return a[0] < b[0]; });

        int start = points[0][0];
        int end = points[0][1];

        vector<vector<int>> intersected_intervals;

        for (auto & interval : points) {
            int cur_start = interval[0];
            int cur_end = interval[1];

            if (cur_start > end) {
                intersected_intervals.push_back({start, end});
                end = cur_end;
            }
            else {
                end = min(end, cur_end);
            }
            start = max(start, cur_start);
        }
        intersected_intervals.push_back({start, end});
        return intersected_intervals.size();
    }
};


class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        std::sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>&b){
            return a[0] < b[0];
        });
        int start = points[0][0];
        int end = points[0][1];

        vector<vector<int>> intersections;

        for (auto& interval : points) {
            int cur_start = interval[0];
            int cur_end = interval[1];
            
            if (end < cur_start) {
                intersections.push_back({start, end});
                end = cur_end;
                start = cur_start;
            }
            else {
                end = min(end, cur_end);
                start = max(start, cur_start);
            }
        }
        intersections.push_back({start, end});
        return intersections.size();
    }
};