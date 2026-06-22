/*
 * This program extracts positive integers from an array into a dynamically allocated array.
 * It first counts the number of positive elements, allocates memory for the result, and copies the values.
 * The caller is responsible for freeing the returned pointer to avoid memory leaks.
 */

#include <stdio.h>
#include <stdlib.h>

int* extractPositives(int *arr, int n, int *outSize){
    int count = 0; 

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > 0){
            count++;
        }
    }

    *outSize = count; 

    if (count == 0){
        return NULL; 
    }

    int *posArray = (int*)malloc(count * sizeof(int)); 

    int j  = 0; 

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > 0){
            *(posArray + j) = *(arr + i); 
            j++; 
        }
    }

    return posArray;
    
    
}

int main(){
    int n = 6;
    int arr[] = {-5, 10, -3, 22, 0, 8};
    int newSize;

    // Pass &newSize so the function can modify it
    int *positives = extractPositives(arr, n, &newSize);

    if (positives != NULL) {
        printf("Extracted %d positive numbers: ", newSize);
        for (int i = 0; i < newSize; i++) {
            printf("%d ", *(positives + i));
        }
        printf("\n");
        
        // Always free!
        free(positives);
    } else {
        printf("No positive numbers found or memory failed.\n");
    }

    return 0;
}
