/*
 * This program calculates the sum of elements in an integer array
 * by using pointer arithmetic instead of array indexing.
 * Key approach: Initialize a pointer to the array's first element,
 * then iterate through the array by incrementing the pointer
 * and accumulating the value pointed to until the end is reached.
 */

#include <stdio.h>

int main(){
    int n = 5; 
    int arr[5] = {1, 2, 3, 4 ,5}; 

    int sum = 0; 

    int *ptr = arr; 

    for (int i = 0; i < n ; i++)
    {
        sum += *ptr; 
        ptr++; 
    }

    printf("%d", sum); 
    
    return 0;
}
