/*
 * This program extracts even numbers from an integer array.
 * It uses pointer arithmetic to traverse the array and dynamically allocates memory
 * for the resulting array of even numbers.
 * Key approach: Two-pass algorithm - first count evens, then allocate and copy.
 */

#include <stdio.h>
#include <stdlib.h>

int* getEvenNumbers(int *arr, int n, int *evenCount){
    *evenCount = 0;

    for (int i = 0; i < n; i++){
        if (*(arr + i) % 2 == 0){
            (*evenCount)++; 
        }
    }

    int *evenArr = (int *)malloc((*evenCount) * sizeof(int)); 
    if (evenArr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    int j = 0; 
    for (int i = 0; i < n; i++){
        if (*(arr + i) % 2 == 0) {
            *(evenArr + j) = *(arr + i);
        }
    }

    return evenArr; 
}

int main(){
    int n; 
    
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0;
    int *evenArr = getEvenNumbers(arr, n, &evenCount);
    
    if (evenArr != NULL) {
        printf("Even numbers: ");
        for (int i = 0; i < evenCount; i++) {
            printf("%d ", evenArr[i]);
        }
        printf("\n");
        free(evenArr);
    }
    
    return 0;
}
