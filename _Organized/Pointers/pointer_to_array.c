/*
 * This program demonstrates how to use a pointer to an array in C.
 * It declares a pointer 'ptr' that points to an entire array of 5 integers.
 * The program iterates through the array using pointer arithmetic to print each element.
 */

#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    int (*ptr)[5] = &arr; 

    printf("Elelemts using pointer to an Array: "); 
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (*ptr)[i]);
    }

    printf("\n");
    
    return 0;
}
