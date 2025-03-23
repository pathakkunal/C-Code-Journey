#include <stdio.h>

int maxProfit(int prices[], int n) {
    int profit = 0;

    // Iterate through the price array
    for (int i = 1; i < n; i++) {
        // If the current price is greater than the previous price
        if (prices[i] > prices[i - 1]) {
            // Add the profit (difference) to the total profit
            profit += prices[i] - prices[i - 1];
        }
    }

    return profit;
}

int main() {
    int prices1[] = {100, 180, 260, 310, 40, 535, 695};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);
    printf("Maximum Profit for prices1: %d\n", maxProfit(prices1, n1));

    int prices2[] = {4, 2, 2, 2, 4};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);
    printf("Maximum Profit for prices2: %d\n", maxProfit(prices2, n2));

    int prices3[] = {7, 1, 5, 3, 6, 4};
    int n3 = sizeof(prices3) / sizeof(prices3[0]);
    printf("Maximum Profit for prices3: %d\n", maxProfit(prices3, n3));

    return 0;
}


// Approach:
// Iterate through the array:

// We will loop through the array of stock prices.
// Whenever the price on the current day is greater than the price on the previous day, it means there's a potential profit to be made by selling on the current day and buying on the previous day.
// Accumulate the profits:

// We keep adding the difference between the current price and the previous price whenever the current price is higher. This ensures that we are accumulating all the possible profits from "local" rising trends in the price.
// Edge Case:

// If the array is sorted in decreasing order, there will be no profit, so the result will be 0.
// Steps:
// Iterate over the array from the second element onward.
// For each element, check if the current price is greater than the previous day's price (indicating a profitable transaction).
// If true, add the difference between the current and previous price to the profit.