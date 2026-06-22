/*
 * This program rotates an array to the left by k positions.
 * It uses a temporary variable to store the first k elements and shifts the remaining elements to the left.
 * The final array is printed after the rotation is complete.
 */

#include <stdio.h>

int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k =2; 
    int n = 8; 

    k = k%n;
    
    int temp = 0;

    for (int i = 0; i < k; i++)
    {
        temp = arr[n-1];
        for (int j = n-1; j> 0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
