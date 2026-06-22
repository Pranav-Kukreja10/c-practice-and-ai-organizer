/*
 * This program calculates the sum of elements in an integer array using recursion.
 * The recursiveSum function takes a pointer to the array and its size.
 * Base case: when size is 0, return 0.
 * Recursive step: add current element to the sum of the rest of the array.
 */

#include <stdio.h>

int recursiveSum(int *ptr, int size) {
    if (size == 0) {
        return 0;
    }

    return *ptr + recursiveSum(ptr + 1, size - 1);
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("%d", recursiveSum(arr, size));
    return 0;
}
