/*
 * This program performs a circular left shift on three integer values.
 * It uses pointer arithmetic to swap values in a cyclic manner:
 * The value of c is moved to a, b to c, and a to b.
 */

#include <stdio.h>

void circularShift(int *a, int *b, int *c) {
    int temp = *c; 
    *c = *b; 
    *b = *a; 
    *a = temp; 
}

int main(){
    int x = 10, y = 20, z = 30; 

    circularShift(&x,&y,&z); 

    printf("%d %d %d", x, y, z);
    return 0;
}
