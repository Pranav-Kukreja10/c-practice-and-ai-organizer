/*
 * This program finds the maximum element in an integer array.
 * It iterates through the array once, comparing each element to the current maximum.
 * Handles edge cases like empty arrays and single-element arrays.
 */

#include <stdio.h>

int findMax(int *arr, int size) {
    if (size <= 0) return 0; 

    int max = *arr; 

    for (int i = 0; i < size; i++) {
        if (*(arr + i) > max){
            max = *(arr + i); 
        }
    }

    return max; 
}

int main(){
    int arr1[] = {10, 45, 2, 89, 34};
    int arr2[] = {-5, -1, -20};
    int arr3[] = {7};

    printf("Test 1 Output: %d\n", findMax(arr1, 5));
    printf("Test 2 Output: %d\n", findMax(arr2, 3));
    printf("Test 3 Output: %d\n", findMax(arr3, 1));
    return 0;
}
