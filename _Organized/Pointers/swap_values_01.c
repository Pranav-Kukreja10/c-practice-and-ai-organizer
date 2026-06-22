/*
 * This program demonstrates pointer usage in C.
 * It defines a swap function that exchanges the values of two integers
 * by taking their addresses as arguments. The main function tests this
 * by swapping two variables and printing the result.
 */

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

int main(){
    int x = 5, y = 10;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
