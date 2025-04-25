#include "bits/stdc++.h"
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int b = 0;
    int s = 1;
    int profit = 0;
    while(s < n) {
        int buy = prices[b];
        int sell = prices[s];
        if(sell <= buy) {
            b = s;
            s++;
        } else {
            profit = max(profit, sell-buy);
            s++;
        }
    }
    return profit;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> prices = {10,1,5,6,7,1};
    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << endl;

    return 0;
}