/*
 * Recursive Array Sum Calculator
 * This program demonstrates a recursive approach to calculate the sum of elements in an integer array.
 * The function sumArray() uses a base case where n <= 0 returns 0, and a recursive step that adds
 * the last element to the sum of the remaining array elements.
 */

#include <stdio.h>

// Recursive function to calculate array sum
int sumArray(int arr[], int n) {
    // Base case: if array size is 0, sum is 0
    if (n <= 0) {
        return 0;
    }
    // Recursive step: add the last element to the sum of the remaining array
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr1[] = {1, 5, 10};
    int arr2[] = {-5, 5, 2};
    int arr3[] = {}; // Empty array representation
    
    printf("Input: [1, 5, 10] | Output: %d\n", sumArray(arr1, 3));
    printf("Input: [-5, 5, 2] | Output: %d\n", sumArray(arr2, 3));
    printf("Input: []          | Output: %d\n", sumArray(arr3, 0));
    
    return 0;
}
