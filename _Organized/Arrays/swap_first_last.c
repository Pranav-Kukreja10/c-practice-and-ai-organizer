/*
 * This program demonstrates swapping the first and last elements of an array.
 * It uses a temporary variable to hold the last element before assignment.
 * After the swap, the array is printed to verify the change.
 */

#include <stdio.h>

int main(){
    int arr[5] = {11, 22, 33, 44, 55}; 

     int first;
     int last;
     int temp; 
     temp = arr[4];
     arr[4] = arr[0]; 
     arr[0] = temp; 

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}
