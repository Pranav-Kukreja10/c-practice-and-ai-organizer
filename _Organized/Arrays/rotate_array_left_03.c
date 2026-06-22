/*
 * This program rotates an array to the left by one position.
 * It saves the first element, shifts all other elements one position to the left,
 * and places the saved element at the end of the array.
 */

#include <stdio.h>

int main(){
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    int n = 8; 

    int temp = arr[0];

    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp; 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

    
    return 0;
}
