#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> result;
        int n = intervals.size();
        int i = 0;

        while (i < n && newInterval[0] > intervals[i][1]) {
            result.push_back(intervals[i++]);
        }

        int start = newInterval[0];
        int end = newInterval[1];
        while (i < n && end >= intervals[i][0]) {
            start = min(intervals[i][0], start);
            end = max(intervals[i][1], end);
            i++;
        }
        result.push_back({start, end});
        while (i < n) {
            result.push_back(intervals[i++]);
        }
        return result;
    }
};

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // We’ll create a new result array
        vector<vector<int>> result;
        result.reserve(intervals.size() + 1);

        // 1) Use lower_bound to find the position where newInterval's start would go
        auto it = std::lower_bound(
            intervals.begin(),
            intervals.end(),
            newInterval[0],  // we compare against the newInterval's start
            [](const vector<int>& interval, int start) {
                return interval[0] < start;
            }
        );

        // 2) Insert all intervals that lie entirely before the newInterval
        //    (which are intervals from the beginning up to it)
        result.insert(result.end(), intervals.begin(), it);

        // 3) Insert the new interval itself in the correct spot
        //    We still need to merge if it overlaps with any intervals after it
        result.push_back(newInterval);

        // 4) Now, insert the remaining intervals, merging if necessary
        for (; it != intervals.end(); ++it) {
            // If the current interval overlaps with the last element in result
            // then we merge
            auto& last = result.back();
            if ((*it)[0] <= last[1]) {
                // They overlap, so merge
                last[1] = max(last[1], (*it)[1]);
            } else {
                // No overlap, just add it to result
                result.push_back(*it);
            }
        }

        return result;
    }
};
