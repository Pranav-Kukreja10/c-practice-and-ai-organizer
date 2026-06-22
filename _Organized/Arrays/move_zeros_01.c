/*
 * This program moves all zeros in an array to the end while maintaining
 * the relative order of non-zero elements.
 * Approach: Uses a nested loop to swap each zero found with the next element,
 * effectively bubbling zeros to the right side of the array.
 */

#include <stdio.h>

void moveZeros(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (arr[j] == 0) {
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            }
        }
        
    }
    
}

int main(){
    int arr[] = {0, 1, 0, 3, 12};
    moveZeros(arr, 5);
    for(int i=0; i<5; i++) printf("%d ", arr[i]);
    return 0;
}
