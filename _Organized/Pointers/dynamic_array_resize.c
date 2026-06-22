/*
 * This program demonstrates dynamic memory allocation and resizing using malloc and realloc.
 * It starts with a small initial capacity and doubles the array size whenever it becomes full.
 * The user can input numbers until -1 is entered to stop adding elements.
 * Finally, it prints all entered elements, the total count, and the final allocated capacity.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int capacity = 2; 
    int size = 0; 
    int num; 

    int *arr = (int *)malloc(capacity * sizeof(int)); 
    if (arr == NULL){
        printf("Memory Allocation failed!\n");
        return 1; 
    }

    printf("Enter numbers (-1 to stop): "); 

    while (1) {
        scanf("%d", &num); 
        if (num == -1) {
            break; 
        }

        if (size == capacity) {
            capacity *= 2; 
            int *temp = (int *)realloc(arr, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed! \n");
                free(arr); 
                return 1; 
            }
            arr = temp; 
        }

        *(arr + size) = num; 
        size++; 
    }

    printf("\nElements entered: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\nTotal elements: %d\n", size);
    printf("Final allocated capacity: %d\n", capacity);

    free(arr); // Clean up
    return 0;
    return 0;
}
