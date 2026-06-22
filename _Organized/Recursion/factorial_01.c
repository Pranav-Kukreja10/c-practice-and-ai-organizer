/*
 * This program calculates the factorial of a given non-negative integer using recursion.
 * The factorial of n (n!) is defined as n * (n-1)!, with base cases 0! and 1! equal to 1.
 * The recursive function reduces the problem size by 1 in each call until reaching the base case.
 */

#include <stdio.h>

long long factorial(int n){
    if (n == 0 || n == 1){
        return 1; 
    }

    return n * factorial(n -1);
}

int main(){
    printf("%d\n", factorial(5)); 
    printf("%d\n", factorial(4)); 
    printf("%d\n", factorial(7)); 
    return 0;
}
