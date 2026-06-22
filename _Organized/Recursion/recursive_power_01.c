/*
 * This program calculates the power of a number using recursion.
 * It takes a base and an exponent as input and returns base raised to the power of exp.
 * The recursive approach reduces the exponent by 1 in each call until the base case (exp == 0) is reached.
 */

#include <stdio.h>

int power (int base, int exp) {
    if (exp == 0) {
        return 1; 
    }

    return base * power (base, exp - 1); 
}

int main(){
    int a, b; 
    scanf("%d %d", &a, &b); 

    printf("%d", power(a, b)); 
    return 0;
}
