/*
 * This program removes all zeros from an integer array by shifting non-zero elements to the left.
 * It uses a nested loop where the inner loop scans from the current position to the end of the array.
 * When a zero is found, it swaps the zero with the next element, effectively bubbling non-zero values forward.
 */

#include <stdio.h>

int main(){
    int arr[6] = {0, 1, 0, 3, 12, 5}; 

    int size = 6; 

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] == 0){
                int temp; 
                temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            }
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); 
    }
    
    
    return 0;
}
