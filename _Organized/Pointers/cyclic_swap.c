/*
 * This program performs a cyclic left shift on three integer values.
 * It uses a helper function 'cyclicswap' that takes pointers to the three integers.
 * The algorithm swaps the values such that the first becomes the second,
 * the second becomes the third, and the third becomes the first.
 */

#include <stdio.h>

void cyclicswap(int *a, int *b, int *c) {
    int temp = *a; 
    *a = *b; 
    *b = *c; 
    *c = temp; 
}

int main(){
    int x, y, z; 
    scanf("%d %d %d", &x, &y, &z); 

    cyclicswap(&x, &y, &z); 

    printf("%d %d %d\n", x, y, z); 

    return 0;
}
