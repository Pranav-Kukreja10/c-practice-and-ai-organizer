/*
 * This program demonstrates a recursive approach to calculate the power of a number.
 * The function 'power' computes base raised to the exponent 'exp' using recursion.
 * It handles three cases: exponent 0 (returns 1), negative exponent (recursively computes reciprocal),
 * and positive exponent (multiplies base by the result of the recursive call).
 */

#include <stdio.h>

double power(double base, int exp){
    if (exp == 0) return 1; 

    if (exp < 0) return 1 / power(base, -exp);
    return base * power(base, exp - 1);  
}

int main(){

    return 0;
}

int main() {
    printf("%.2f\n", power(2, 3));   // Expected: 8.00
    printf("%.2f\n", power(2, -3));  // Expected: 0.125
    printf("%.2f\n", power(5, 0));   // Expected: 1.00
    return 0;
}
