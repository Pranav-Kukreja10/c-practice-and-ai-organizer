/*
 * This program demonstrates reversing an array using recursion.
 * The core approach involves swapping elements from the start and end pointers
 * and recursively moving inward until the pointers meet or cross.
 * It handles arrays of various sizes including single-element arrays.
 */

#include <stdio.h>

// Recursive function to reverse an array
void reverseArray(int arr[], int start, int end) {
    // Base case: pointers have met or crossed
    if (start >= end) {
        return;
    }
    
    // Swap the elements at the start and end pointers
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    // Recursive step: move pointers inward
    reverseArray(arr, start + 1, end - 1);
}

// Helper to print arrays
void printArray(int arr[], int size) {
    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d%s", arr[i], i < size - 1 ? ", " : "");
    }
    printf("]");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20};
    int arr3[] = {7};
    
    reverseArray(arr1, 0, 4);
    reverseArray(arr2, 0, 1);
    reverseArray(arr3, 0, 0);
    
    printf("Test 1 Output: "); printArray(arr1, 5); printf("\n");
    printf("Test 2 Output: "); printArray(arr2, 2); printf("\n");
    printf("Test 3 Output: "); printArray(arr3, 1); printf("\n");
    
    return 0;
}
