/*
 * This program converts a decimal integer to its binary representation using recursion.
 * It employs a divide-and-conquer approach where the function first recursively processes the quotient (n/2)
 * and then prints the remainder (n%2) on the way back up the call stack, effectively building the binary string from most significant to least significant bit.
 * The main function handles the special case of zero separately to ensure correct output.
 */

#include <stdio.h>

void decimalToBinary(int n){
    if (n == 0){
        return; 
    }

    decimalToBinary(n/2); 

    printf("%d", n % 2); 
}

int main(){
    int n;
    scanf("%d", &n); 

    if (n == 0){
        printf("0"); 
    }
    else{
        decimalToBinary(n); 
    }

    
    return 0;
}
