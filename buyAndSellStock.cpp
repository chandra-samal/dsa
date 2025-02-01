#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int mini = prices[0];
    int maxProfit = 0;
    int profit=0;
    for (int i = 1; i < prices.size(); i++){
        profit = prices[i] - mini;
        if (profit>maxProfit) maxProfit = profit;
        mini = min(mini, prices[i]);
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {3, 2, 1, 69};

    cout << maxProfit(prices) << "\n";

    return 0;
}