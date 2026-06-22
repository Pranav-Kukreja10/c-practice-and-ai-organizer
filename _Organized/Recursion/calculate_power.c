/*
 * This program calculates the power of a number using recursion.
 * It takes a base and an exponent as arguments and returns base raised to the power of exp.
 * The recursive approach multiplies the base by the result of the function called with exp-1.
 */

#include <stdio.h>

long long calculatePower(int base, int exp){
    if (exp == 0){
        return 1; 
    }

    return base * calculatePower(base, exp - 1); 
}

int main(){
    int x = 5, y = 2; 

    printf("%d", calculatePower(x, y));
    return 0;
}
