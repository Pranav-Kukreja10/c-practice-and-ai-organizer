/*
 * This program reverses an integer array in-place using a two-pointer approach.
 * It swaps elements from the start and end of the array until they meet in the middle.
 * The main function demonstrates the reversal and prints the modified array.
 */

#include <stdio.h>

void reverse_array(int *arr, int size){
    int *start = arr; 
    int *end = arr + size - 1; 

    while (end>start){
        int temp = *start; 
        *start = *end; 
        *end = temp; 

        end--; 
        start++; 
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Accessing using pointer arithmetic
    }
    printf("\n");
    return 0;
}
