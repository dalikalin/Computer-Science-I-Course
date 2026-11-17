//An array stores a stock's price on consecutive days. Choose one day to buy a stock and a later day to sell it to obtain the maximum profit. Display the maximum possible profit. If no profit is possible, display 0.
#include <iostream>
using namespace std;
int main () {
    double a[] = {10, 20, 30, 10.5, 15, 50, 30.5};
    int n = 7;
    double lowestPrice = a[0];
    double maxProfit = 0;

    for (int i = 1; i < n; i++) {
        double profit = a[i] - lowestPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
        if (a[i] < lowestPrice) {
            lowestPrice = a[i];
        }
    }

    cout << maxProfit;

    return 0;
}