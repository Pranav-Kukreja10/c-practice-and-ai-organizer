/*
 * This program merges two sorted arrays into a single sorted array.
 * It uses a two-pointer technique to compare elements from both arrays
 * and appends the smaller element to the result array until one array is exhausted.
 * Remaining elements from the non-exhausted array are then appended.
 */

#include <stdio.h>

void mergeSorted(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0; 
    int j = 0; 
    int k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i]; 
            i++; 
        }
        else{
            result[k] = arr2[j]; 
            j++; 
        }
        k++; 
    }

     while (i < size1) {
        result[k++] = arr1[i++]; 
    }

    while (j < size2){
        result[k++] = arr2[j++]; 
    }

   
}

void printArray(int arr[], int size) {
    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d%s", arr[i], i < size - 1 ? ", " : "");
    }
    printf("]\n");
}

int main(){
    int A1[] = {1, 3, 5};
    int B1[] = {2, 4, 6};
    int res1[6];
    
    int A2[] = {10, 20};
    int B2[] = {5, 15, 25};
    int res2[5];
    
    mergeSorted(A1, 3, B1, 3, res1);
    mergeSorted(A2, 2, B2, 3, res2);
    
    printf("Test 1 Output: "); printArray(res1, 6);
    printf("Test 2 Output: "); printArray(res2, 5);
    return 0;
}
