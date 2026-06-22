/*
 * This program prints a parity pattern based on the sum of row and column indices.
 * For each row i from 1 to n, it iterates through columns j from 1 to i.
 * It prints 0 if (i+j) is even, and 1 if (i+j) is odd, creating a triangular pattern.
 */

#include <stdio.h>

int main(){
    int n = 5; 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", (i+j) % 2);
        }
        printf("\n");
    }
    
    return 0;
}
