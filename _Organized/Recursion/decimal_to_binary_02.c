/*
 * This program converts a decimal integer to its binary representation.
 * It uses a recursive approach where the function first processes the higher-order bits
 * by recursively calling itself with n/2, then prints the least significant bit (n%2).
 * This ensures the binary digits are printed in the correct order from most significant to least significant.
 */

#include <stdio.h>

void decToBin(int n) {
    if (n > 1) decToBin(n/2); 

    printf("%d", n%2); 
}

int main(){
    int num; 
    scanf("%d", &num); 
    decToBin(num); 
    return 0;
}
