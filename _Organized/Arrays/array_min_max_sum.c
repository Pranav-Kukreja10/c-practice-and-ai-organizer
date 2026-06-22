/*
 * This program calculates the minimum, maximum, and sum of elements in an integer array.
 * It uses a helper function multiReturnArray that takes pointers to store results.
 * The algorithm iterates once through the array to find min, max, and sum in O(n) time.
 */

#include <stdio.h>

void multiReturnArray(int *a, int size, int *min, int *max, int *sum){
    *min = *a; 
    *max = *a; 
    *sum = 0; 

    for (int i = 0; i < size; i++)
    {
        int current = *(a + i); 
        if (current < *min) *min = current; 
        if (current > *max) *max = current;  
        *sum += current; 
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    int min, max, sum;
    multiReturnArray(arr, n, &min, &max, &sum);
    
    printf("%d %d %d\n", min, max, sum);
    return 0;
}
