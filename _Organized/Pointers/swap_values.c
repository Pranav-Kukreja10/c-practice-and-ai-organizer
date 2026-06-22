/*
 * This program demonstrates pointer usage in C.
 * It defines a swap function that exchanges the values of two integers
 * by taking their addresses as arguments, showcasing pass-by-reference.
 * The main function tests the swap by printing values before and after the operation.
 */

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

int main(){
    int x = 5; 
    int y = 10; 
    swap(&x, &y); 
    printf("%d %d", x, y); 
    return 0;
}
