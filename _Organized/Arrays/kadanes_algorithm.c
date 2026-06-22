/*
 * This program implements Kadane's Algorithm to find the maximum sum of a contiguous subarray.
 * It reads an array of integers from the user and iterates through them, maintaining a running sum.
 * If the running sum becomes negative, it resets to zero. The maximum sum encountered is tracked and printed.
 */

#include <stdio.h>
#include <limits.h>

int main(){
    int n; scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int max_sum = INT_MIN; 
    int current_Sum = 0;
    int *ptr = arr; 

    for (int i = 0; i < n; i++)
    {
        current_Sum+= *ptr; 

        if (current_Sum > max_sum) {
            max_sum = current_Sum; 
        } 

        if (current_Sum < 0) {
            current_Sum = 0;
        }

        ptr++;
    }

    printf("%d", max_sum);
    
    
    return 0;
}
