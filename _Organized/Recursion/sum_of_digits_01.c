/*
 * This program calculates the sum of digits of a given integer using recursion.
 * The base case returns 0 when the number is 0.
 * The recursive step adds the last digit (n % 10) to the sum of the remaining digits (n / 10).
 */

#include <stdio.h>

int sumOfDigits(int n); 

int main(){
    int test_cases[] = {1234, 909, 5};
    for (int i = 0; i < 3; i++) {
        printf("Input: %d | Output: %d\n", test_cases[i], sumOfDigits(test_cases[i]));
    }
    return 0;
}


int sumOfDigits(int n) {
    if (n == 0){
        return 0; 
    }

    return (n % 10) + sumOfDigits(n / 10); 
}
