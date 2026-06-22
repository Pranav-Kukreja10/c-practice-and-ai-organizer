/*
 * This program calculates the factorial of a given non-negative integer using recursion.
 * The factorial of n (n!) is defined as n * (n-1)!, with the base case being 0! = 1.
 * The recursive function multiplies the current number by the factorial of the previous number
 * until it reaches the base case of 0.
 */

#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; 
    }

    return n * factorial(n - 1); 
}

int main(){
    int testCases[] = {5, 0, 7, 4}; 

    for (int i = 0; i < 4; i++) {
        printf("Input: %d | Output: %d\n", testCases[i], factorial(testCases[i]));
    }
    return 0;
}
