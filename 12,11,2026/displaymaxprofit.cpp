//An array stores a stock's price on consecutive days. Choose one day to buy a stock and a later day to sell it to obtain the maximum profit. Display the maximum possible profit. If no profit is possible, display 0.
#include <iostream>
using namespace std;
int main () {
    int a[] = {100, 20, 30, 19, 15, 50, 30};
    int n = 7;
    int lowestprice = a[0];
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        int profit = a[i] - lowestprice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
        if (a[i] < lowestprice) {
            lowestprice = a[i];
        }
    }

    cout << maxProfit;

    return 0;
}