/*
 * This program demonstrates dynamic memory allocation and pointer arithmetic.
 * It allocates an array of integers, fills it with multiples of a target number,
 * and prints the resulting sequence before freeing the allocated memory.
 */

#include <stdio.h>
#include <stdlib.h>

// Function takes the pointer and populates the memory block
void fillMultiples(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        // Pointer arithmetic to assign values
        *(arr + i) = target * (i + 1); 
    }
}

int main() {
    int n, target;
    printf("Enter number of elements and the target multiple: ");
    scanf("%d %d", &n, &target);

    // 1. Allocate memory dynamically
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 2. Pass the pointer to the function
    fillMultiples(arr, n, target);

    // 3. Print the populated array
    printf("First %d multiples of %d are: ", n, target);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // 4. Free the memory
    free(arr);

    return 0;
}
