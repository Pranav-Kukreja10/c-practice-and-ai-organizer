/*
 * This program removes duplicate elements from an integer array.
 * It uses a nested loop approach: for each element, it scans the rest of the array
 * and shifts subsequent elements left if a duplicate is found, reducing the array size.
 * The main function reads input, calls the removal function, and prints the result.
 */

#include <stdio.h>

void removeduplicate(int *arr, int *size) {
    for (int i = 0; i < *size; i++)
    {
        for (int j = i + 1; j < *size; j++)
        {
            if (arr[i] == arr[j]){
                for (int k = j; k < *size - 1; k++)
                {
                    arr[k] = arr[k + 1]; 
                }
                (*size)--; 
                
            }
        }
        
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    removeduplicate(arr, &n);
    
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
