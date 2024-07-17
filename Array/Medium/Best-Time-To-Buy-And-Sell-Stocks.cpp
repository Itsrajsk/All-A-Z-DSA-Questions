#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximum profit
int maxProfit(vector<int> &prices)
{
    int mini = prices[0], maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

int main()
{
    // Example usage
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;

    return 0;
}
