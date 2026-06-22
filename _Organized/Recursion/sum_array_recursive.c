/*
 * This program calculates the sum of elements in an integer array using recursion.
 * The recursive function sumOfArray takes a pointer to the current element and the remaining size.
 * Base case: if size is 0, return 0.
 * Recursive step: return current element value plus the sum of the rest of the array.
 */

#include <stdio.h>

int sumOfArray(int *arr, int size){

    if (size == 0){
        return 0; 
    }

    return *arr + sumOfArray(arr + 1, size - 1);
}

int main(){

    int size = 4;
    int arr[] = {10, 20, 30, 40};

    // Call the recursive function, passing the array (which acts as a pointer)
    int total = sumOfArray(arr, size);

    printf("Sum using recursion: %d\n", total);

    return 0;
}
