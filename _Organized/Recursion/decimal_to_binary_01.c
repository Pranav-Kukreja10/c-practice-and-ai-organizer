/*
 * This program converts a decimal integer to its binary representation.
 * It uses a recursive approach where the function returns the least significant bit
 * multiplied by the appropriate power of 10 to build the binary string.
 * The recursion terminates when the input number reaches 0.
 */

#include <stdio.h>

long long decimalToBinary(int n) {
    if (n == 0) return 0; 

    return (n % 2) + 10 * decimalToBinary(n / 2); 
}

int main(){
    int test_cases[] = {10, 25, 0};
    
    for (int i = 0; i < 3; i++) {
        printf("Input: %d | Output: %lld\n", 
               test_cases[i], decimalToBinary(test_cases[i]));
    }
    return 0;
}
