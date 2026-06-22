/*
 * This program rotates an array of integers to the left by k positions.
 * It first stores the first k elements in a temporary array.
 * Then it shifts the remaining elements to the left by k positions.
 * Finally, it places the stored elements at the end of the array.
 */

#include <stdio.h>

void rotateLeft(int *arr, int n, int k) {
    k = k % n; 

    int temp[k]; 

    for (int i = 0; i < k; i++)
    {
        temp[i] = *(arr + i); 
    }

    for (int i = 0; i < n - k; i++)
    {
        *(arr + i) = *(arr + i + k);
    }

    for (int i = 0; i < k; i++)
    {
        *(arr + n - k + i) = temp[i]; 
    }
}

int main(){
    int n, k; 
    scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &k); 

    rotateLeft(arr, n, k); 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i)); 
    }
    
    
    return 0;
}
