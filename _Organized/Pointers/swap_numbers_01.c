/*
 * This program demonstrates pointer usage in C.
 * It defines a swap function that exchanges the values of two integers
 * by taking their addresses as arguments. The main function reads two
 * numbers from the user, calls the swap function with their addresses,
 * and then prints the swapped values.
 */

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

int main(){
    int x, y; 
    printf("Enter two numbers: "); scanf("%d %d", &x, &y); 

    swap(&x, &y);

    printf("%d %d", x, y);
    return 0;
}
