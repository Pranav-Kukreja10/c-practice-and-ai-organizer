/*
 * This program demonstrates pointer usage for swapping two integer values.
 * It defines a swap function that takes pointers to two integers and exchanges their values.
 * The main function initializes two variables and prints them before the swap operation.
 */

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

int main(){
    int x = 10, y = 5; 
    printf("%d %d", x, y); 
    return 0;
}

int main(){
    int x = 10, y = 5;
    printf("Before swap: %d %d\n", x, y);
    swap(&x, &y);
    printf("After swap: %d %d\n", x, y);
    return 0;
}
