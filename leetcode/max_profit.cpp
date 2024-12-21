#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minprice = 10000;
        for (int i = 0; i < prices.size(); i++) {
            if(minprice > prices[i]) minprice = prices[i];
            if(prices[i] - minprice > maxprofit) maxprofit = prices[i] - minprice;
        }
        return maxprofit;
    }
};