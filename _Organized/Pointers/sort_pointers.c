/*
 * This program demonstrates sorting an array of integer pointers.
 * It uses a bubble sort algorithm to reorder the pointers themselves,
 * not the values they point to. After sorting, dereferencing the
 * pointers yields the sorted values while the original array remains unchanged.
 */

#include <stdio.h>

void sort_pointers(int *ptr_array[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*ptr_array[j] > *ptr_array[j + 1]){
                int *temp = ptr_array[j]; 
                ptr_array[j] = ptr_array[j + 1]; 
                ptr_array[j + 1] = temp; 
            }
        }
        
    }
    
}

int main(){
    int arr[] = {50, 10, 30, 20, 40};
    int size = 5;
    int *ptr_arr[5]; // Array of 5 integer pointers

    // Initialize pointers to point to elements of arr
    for (int i = 0; i < size; i++) {
        ptr_arr[i] = &arr[i];
    }

    sort_pointers(ptr_arr, size);

    printf("Sorted via pointers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr_arr[i]); // Dereference the sorted pointers
    }
    
    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Original array is unchanged
    }
    printf("\n");
    return 0;
}
