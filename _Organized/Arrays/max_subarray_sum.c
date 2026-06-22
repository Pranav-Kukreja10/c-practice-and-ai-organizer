/*
 * This program calculates the maximum sum of any contiguous subarray within a given integer array.
 * It uses a brute-force approach with nested loops to check every possible subarray starting from each index.
 * For each starting position, it accumulates the sum of subsequent elements and updates the global maximum if a larger sum is found.
 */

#include <stdio.h>

int main(){
    int n = 8;
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};

    int max_sum = arr[0];

    for (int i = 0; i < n; i++)
    {
        int current_sum = 0;
        for (int j = i; j < n; j++)
        {
            current_sum += arr[j];

            if (current_sum > max_sum){
                max_sum = current_sum;
            }
       
        }
        
    }

    printf("%d", max_sum);
    
    return 0;
}
