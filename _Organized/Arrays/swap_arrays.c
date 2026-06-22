/*
 * This program demonstrates swapping elements between two integer arrays.
 * The swapArrays function iterates through the arrays and exchanges corresponding elements.
 * It handles arrays of any size by taking the size as a parameter.
 * The printArray function is used to display the state of arrays after swapping.
 */

#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size) {
    int temp; 
    for (int i = 0; i < size; i++)
    {
        temp = *(arr1 + i); 
        *(arr1 + i) = *(arr2 + i); 
        *(arr2 + i) = temp; 
    }
    
}

void printArray(const char* name, int *arr, int size) {
    printf("%s = [", name);
    for (int i = 0; i < size; i++) {
        printf("%d%s", *(arr + i), i < size - 1 ? ", " : "");
    }
    printf("] ");
}



int main(){
    int A1[] = {1, 2, 3};
    int B1[] = {4, 5, 6};
    
    int A2[] = {0, 0};
    int B2[] = {9, 9};

    swapArrays(A1, B1, 3);
    swapArrays(A2, B2, 2);

    printf("Test 1 Output: ");
    printArray("A", A1, 3);
    printArray("B", B1, 3);
    printf("\n");

    printf("Test 2 Output: ");
    printArray("A", A2, 2);
    printArray("B", B2, 2);
    printf("\n");
    return 0;
}
