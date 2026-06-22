/*
 * This program demonstrates a recursive function to calculate the power of a number.
 * The function 'power' computes x raised to the power of y using recursion.
 * Base case: when y is 0, the result is 1.
 * Recursive step: multiply x by the result of power(x, y-1).
 */

#include <stdio.h>

int power(int x, int y) {
    if (y == 0) {
        return 1; 
    }

    return x * power(x, y - 1);
}

int main(){ 
    int x_vals[] = {2, 5, -3};
    int y_vals[] = {3, 0, 3};
    
    for (int i = 0; i < 3; i++) {
        printf("Input: x=%d, y=%d | Output: %d\n", 
               x_vals[i], y_vals[i], power(x_vals[i], y_vals[i]));
    }
    return 0;
}
