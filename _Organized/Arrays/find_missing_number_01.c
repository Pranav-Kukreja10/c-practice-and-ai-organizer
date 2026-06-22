/*
 * This program finds the missing number in a sequence of 1 to n.
 * It calculates the expected sum of numbers from 1 to n using the formula n*(n+1)/2.
 * Then it sums the actual input numbers and subtracts the actual sum from the expected sum to find the missing number.
 */

#include <stdio.h>

int main(){
    int n; scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int total_Sum = n * (n + 1)/2;
    
    int actual_sum = 0;
    
    for (int i = 0; i < n-1; i++)
    {
        actual_sum += arr[i]; 
    }

    printf("%d", total_Sum - actual_sum); 
    
    
    return 0;
}
