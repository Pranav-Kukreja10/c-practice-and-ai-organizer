/*
 * This program prints Fibonacci numbers in reverse order using recursion.
 * It generates the sequence by recursively moving towards the end of the series
 * and then printing the current number on the way back (post-order traversal).
 * The initial values are 0 and 1, and the function prints n numbers.
 */

#include <stdio.h>

void printReverseFib(int n, int a, int b) {
    if (n == 0) return; 

    printReverseFib(n - 1, b, a + b); 
    printf("%d ", a); 
}



int main(){
    int test_cases[] = {5, 8, 1};
    
    for (int i = 0; i < 3; i++) {
        printf("Input: %d | Output: ", test_cases[i]);
        printReverseFib(test_cases[i], 0, 1);
        printf("\n");
    }
    return 0;
}
