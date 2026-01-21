#include <vector>

#include <bits/stdc++.h>

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

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = 10000;
        int max_profit = 0;

        for (int price: prices) {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price-min_price);
        }

        return max_profit;
    }
};