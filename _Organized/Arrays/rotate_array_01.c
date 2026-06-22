/*
 * This program demonstrates array rotation using the reverse method.
 * The rotation is achieved by reversing the entire array, then reversing the first k elements,
 * and finally reversing the remaining elements from index k to the end.
 * This technique efficiently rotates an array to the right by k positions.
 */

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }
}

void rotate(int arr[], int size, int k){
    k = k % size; 

    reverse(arr, 0, size - 1); 
    reverse(arr, 0, k - 1); 
    reverse(arr, k, size - 1); 
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    rotate(arr, size, 2);
    
    printf("Rotated Array: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    return 0;
}
