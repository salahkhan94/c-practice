#include <vector>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totaltank = 0;
        int currenttank = 0;
        int startidx = 0;

        for (int i = 0; i < gas.size(); i++) {
            totaltank += gas[i] - cost[i];
            currenttank += gas[i] - cost[i];

            if (currenttank < 0) {
                currenttank = 0;
                startidx = i + 1;
            }
        }
        if (totaltank < 0) return -1;
        else return startidx;
    }
};

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totaltank = 0;
        int currenttank = 0;
        int startidx = 0;

        for (int i = 0; i < gas.size(); i++) {
            totaltank += gas[i] - cost[i];
            currenttank += gas[i] - cost[i];

            if (currenttank < 0) {
                currenttank = 0;
                startidx = i + 1;
            }
        }
        if (totaltank < 0) return -1;
        else return startidx;
    }
};