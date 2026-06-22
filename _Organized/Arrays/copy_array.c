/*
 * This program demonstrates array copying in C.
 * It defines a function copyArray() that iterates through a source array
 * and copies each element to a destination array of the same size.
 * A helper function printArray() is used to display arrays in a formatted way.
 */

#include <stdio.h>

void copyArray(int source[], int dest[], int size) {
    for (int i = 0; i < size; i++)
    {
        dest[i] = source[i]; 
    }
    
}

void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i < size - 1) ? ", " : "");
    }
    printf("]\n");
}

int main(){
    int src1[] = {1, 2, 3};
    int dest1[3]; // Make sure destination has enough space!
    
    int src2[] = {99, 100};
    int dest2[2];
    
    copyArray(src1, dest1, 3);
    copyArray(src2, dest2, 2);
    
    printf("Test 1 Dest Output: "); printArray(dest1, 3);
    printf("Test 2 Dest Output: "); printArray(dest2, 2);
    return 0;
}
