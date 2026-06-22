/*
 * This program merges two arrays of different sizes into a single larger array.
 * It then performs a bubble sort on the merged portion to arrange elements in ascending order.
 * The output displays the sorted merged array.
 */

#include <stdio.h>

int main(){
    int arr1[3] = {1,3,5}; 
    int arr2[4] = {2,4,6,8}; 

    int arr[10]; 

    for (int i = 0; i < 3; i++){
        arr[i] = arr1[i]; 
    }

    for (int i = 0; i < 4; i++)
    {
        arr[i+3] = arr2[i]; 
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = i; j < 6; j++)
        {
            if (arr[j] > arr[j+1]){
                int temp; 
                temp = arr[j]; 
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
