/*
 * This program calculates Fibonacci numbers using a recursive approach.
 * The Fibonacci sequence is defined as F(n) = F(n-1) + F(n-2) with base cases F(0)=0 and F(1)=1.
 * The main function tests the recursive function with sample inputs.
 */

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }

    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main(){
    int test_cases[] = {0, 6, 9};
    for (int i = 0; i < 3; i++) {
        printf("Input: %d | Output: %d\n", test_cases[i], fibonacci(test_cases[i]));
    }
    return 0;
}
