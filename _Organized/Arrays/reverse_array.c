/*
 * This program reverses an array of integers in-place.
 * It uses a two-pointer approach where one pointer starts at the beginning
 * and the other at the end of the array, swapping elements until they meet.
 * The time complexity is O(n) and space complexity is O(1).
 */

#include <stdio.h>

void reverseArray(int *a, int size) {
    int *start = a; 
    int *end = a + size - 1; 

    while (start < end) {
        int temp = *start; 
        *start = *end; 
        *end = temp; 

        start++; 
        end--; 
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    reverseArray(arr, n);
    
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
