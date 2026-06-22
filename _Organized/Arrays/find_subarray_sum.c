/*
 * This program reads an array of integers and a target sum from the user.
 * It then searches for any contiguous subarray whose elements sum up to the target value.
 * The algorithm uses a nested loop approach: for each starting index, it accumulates the sum
 * of subsequent elements until either the target is found or the end of the array is reached.
 */

#include <stdio.h>

int main(){
    int n, target; 
    scanf("%d", &n);
    
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &target); 

    for (int i = 0; i < n; i++)
    {
        int current_sum = 0; 
        for (int j = i; j < n; j++)
        {
            current_sum += arr[j]; 

            if (current_sum == target) {
                printf("Found from %d to %d\n", i, j); 
                return 0; 
            }
        }
        
    }

    printf("Not Found"); 
    
    
    return 0;
}
