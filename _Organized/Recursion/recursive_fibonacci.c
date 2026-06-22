/*
 * This program calculates the nth Fibonacci number using a recursive approach.
 * It demonstrates the exponential time complexity of naive recursion by tracking
 * the total number of function calls made during the computation.
 * The Fibonacci sequence is defined as F(0)=0, F(1)=1, and F(n)=F(n-1)+F(n-2).
 */

#include <stdio.h>

int call_count = 0;

int fibonacci(int n){
    call_count++;

    if (n == 0) return 0; 
    if (n == 1) return 1; 

    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main(){ 
    int n = 5;
    int result = fibonacci(n);
    
    printf("Fibonacci number at position %d is: %d\n", n, result);
    printf("Total function calls made: %d\n", call_count);
    return 0;
}
