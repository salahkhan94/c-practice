#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int buy = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < prices[i-1]) {
                maxprofit += prices[i-1] - buy;
                buy = prices[i];
            }
            else if (i == prices.size()-1) {
                maxprofit += prices[i] - buy;
            }
        }
        return maxprofit;
    }
};

class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            // If today's price is higher than yesterday's, book that as profit
            if (prices[i] > prices[i - 1]) {
                maxprofit += prices[i] - prices[i - 1];
            }
        }
        return maxprofit;
    }
};