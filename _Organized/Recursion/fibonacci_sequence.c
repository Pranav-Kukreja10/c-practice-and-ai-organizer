/*
 * This program calculates the nth Fibonacci number using recursion.
 * The Fibonacci sequence starts with 0 and 1, where each subsequent number
 * is the sum of the two preceding ones.
 * Key approach: Base cases for n=0 and n=1 return 0 and 1 respectively,
 * while other values recursively sum the results of n-1 and n-2.
 */

#include <stdio.h>

int fibonacci(int n){
   

    if (n==0) return 0; 
    if (n==1) return 1; 

    return fibonacci(n-1) + fibonacci(n-2); 
}

int main(){
    int n = 6; 
    printf("%d", fibonacci(n)); 
    return 0;
}
