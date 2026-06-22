/*
 * This program removes duplicate elements from a sorted array.
 * It uses a two-pointer approach where 'writeIndex' tracks the position
 * for the next unique element, and iterates through the array to copy
 * only elements different from the previous one.
 */

#include <stdio.h>

int main(){
    int arr[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}; 
    int size = 10; 

    int writeIndex = 1; 

    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1]){
            arr[writeIndex] = arr[i]; 
            writeIndex++; 
        }
    }
    

    for (int i = 0; i < writeIndex; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
