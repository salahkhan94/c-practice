#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int hindex = citations.size();
        for (int i = 0; i < citations.size(); i++) {
            if (citations[i] < hindex) hindex--;
            else if (citations[i] >= hindex) break;
        }
        return hindex;
    }
};