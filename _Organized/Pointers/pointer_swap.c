/*
 * This program demonstrates pointer manipulation using arithmetic swap technique.
 * It swaps the values of two integers passed by reference without using a temporary variable.
 * The algorithm adds both values to the first, subtracts the original second from the first,
 * and finally subtracts the new first from the second to complete the swap.
 */

#include <stdio.h>

void pointerSwap(int *ptr1, int *ptr2) {
    *ptr1 = *ptr1 + *ptr2; 
    *ptr2 = *ptr1 - *ptr2; 
    *ptr1 = *ptr1 - *ptr2; 
}

int main(){
    int x = 10, y = 20;
    pointerSwap(&x, &y);
    printf("%d %d", x, y);  
    return 0;
}
