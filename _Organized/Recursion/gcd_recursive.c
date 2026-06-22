/*
 * This program calculates the Greatest Common Divisor (GCD) of two integers.
 * It uses the Euclidean algorithm implemented recursively.
 * The base case is when the second number is zero, returning the first number.
 */

#include <stdio.h>

int gcd(int a, int b){
    if (b == 0) {
        return a; 
    }

    return gcd (b, a % b); 
}

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2); 

    printf("%d\n", gcd(num1, num2)); 
    return 0;
}
