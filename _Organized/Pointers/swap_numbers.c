/*
 * This program demonstrates pointer usage in C.
 * It defines a function swap_numbers that exchanges the values of two integers
 * by taking their addresses as arguments. The main function tests this by
 * swapping two variables and printing the result.
 */

#include <stdio.h>

void swap_numbers(int *x, int *y){
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}

int main(){
    int a = 10, b = 5; 
    swap_numbers(&a, &b); 
    printf("%d %d", a, b); 
    return 0;
}
