/*
 * This program rotates an array to the right by k positions using the reverse algorithm.
 * The approach involves reversing the entire array, then reversing the first k elements, and finally reversing the remaining elements.
 * This technique efficiently achieves rotation in O(n) time complexity with O(1) extra space.
 */

#include <stdio.h>

void reverse(int arr[], int start, int end){
    while (start < end){
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 

        start++; 
        end--;
    }
}

int main(){
    int n, k; 
    scanf("%d %d", &n, &k); 

    int arr[100]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    k = k % n; 

    reverse(arr, 0, n-k); 

    reverse(arr, 0, k-1); 

    reverse(arr, k, n-1); 


    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); 
    }
    
    
    return 0;
}
