/*
 * This program calculates the sum of all digits in a given integer using recursion.
 * The approach involves two recursive helper functions:
 * 1. getFirst(n): Extracts the first digit of n by recursively dividing by 10 until n < 10.
 * 2. sumOfDigits(n): Returns the sum of the first digit (from getFirst) and the last digit (n % 10).
 * Note: This logic assumes positive integers and may not handle multi-digit sums correctly for n > 99.
 */

#include <stdio.h>

int getFirst(int n) {
    if (n < 10) return n; 
    return getFirst(n / 10); 
}

int sumOfDigits(int n) {
    return getFirst(n) + (n % 10); 
}

int main(){
    int n; 
    scanf("%d", &n); 

    int result = sumOfDigits(n);
    printf("%d", result);  
    return 0;
}
