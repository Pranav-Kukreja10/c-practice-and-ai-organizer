/*
 * This program calculates the Greatest Common Divisor (GCD) of two numbers.
 * It uses the recursive Euclidean algorithm where GCD(a, b) = GCD(b, a % b).
 * The recursion terminates when the second argument becomes zero, returning the first argument.
 */

#include <stdio.h>

long long findGCD(long long a, long long b){
    if (b == 0){
        return a; 
    }

    return findGCD(b, a % b); 
}

int main(){ 
    long long num1, num2; 

    scanf("%lld %lld", &num1, &num2); 

    long long result = findGCD(num1, num2); 

    printf("%lld\n", result); 

    return 0;
}
