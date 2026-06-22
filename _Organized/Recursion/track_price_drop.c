/*
 * This program finds the minimum price in an array of daily prices using recursion.
 * The recursive function trackPriceDrop traverses the array from the given index to the end,
 * updating the lowestPrice pointer whenever a lower price is encountered.
 * Key approach: Base case when index equals size, recursive step processes current element
 * and calls function for next index.
 */

#include <stdio.h>

void trackPriceDrop(int *prices, int index, int size, int *lowestPrice) {
    if (index == size){
        return;
    }

    if (prices[index] < *lowestPrice){
        *lowestPrice = prices[index]; 
    }

    trackPriceDrop(prices, index + 1, size, lowestPrice);
}

int main(){
    int dailyPrices[] = {1500, 1450, 1200, 900, 950}; 

    int size = 5; 

    int min = dailyPrices[0]; 

    trackPriceDrop(dailyPrices, 0, size, &min); 

    printf("%d", min); 
    return 0;
}
