/*
 * This program merges two smaller arrays into a single larger array.
 * It then performs a bubble sort on the merged array to sort it in ascending order.
 * Finally, it prints the sorted result.
 */

#include <stdio.h>

int main(){
    int arr1[3] = {1, 3 ,5}; 
    int arr2[4] = {2, 4, 6, 8}; 
    int arr[7];

    for (int i = 0; i < 7; i++)
    {   
        if (i<3)
        {
            arr[i] = arr1[i];
        }
        else{
            arr[i] = arr2[i-3];
        }
           
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}
