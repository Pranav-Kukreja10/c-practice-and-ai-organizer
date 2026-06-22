/*
 * This program rotates an array to the left by a specified number of positions.
 * It first stores the first 'd' elements in a temporary array, then shifts the remaining elements to the left by 'd' positions.
 * Finally, it places the stored elements at the end of the array to complete the rotation.
 */

#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int d = 2, temp[10] = {}; 


    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }

    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i]; 
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}
