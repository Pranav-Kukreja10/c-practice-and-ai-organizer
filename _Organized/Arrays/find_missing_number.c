/*
 * This program finds the missing number in a sequence from 1 to n.
 * It calculates the expected sum of numbers from 1 to n using the formula n*(n+1)/2.
 * Then it computes the actual sum of the input array and subtracts it from the expected sum.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);

    int arr[n]; 
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]); 
    }

    // int total_sum = n  * (n + 1) / 2; 
    int total_sum = 0; 

    for (int i = 1; i <= n; i++)
    {
        total_sum += i; 
    }
    

    int arr_sum = 0; 
    for (int i = 0; i < n - 1; i++)
    {
        arr_sum+=arr[i]; 
    }

    printf("%d", total_sum-arr_sum); 
    
    
    return 0;
}
