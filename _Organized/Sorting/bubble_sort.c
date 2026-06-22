/*
 * This program implements the Bubble Sort algorithm.
 * It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
 * The largest elements bubble up to the end of the array in each pass.
 */

#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int temp; 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1]; 
                arr[j + 1] = temp;  
            }
        }
        
    }
    
}

int main(){
    int arr[] = {5, 1, 4, 2};
    bubbleSort(arr, 4);
    for(int i=0; i<4; i++) printf("%d ", arr[i]);
    return 0;
    return 0;
}

int main(){
    int arr[] = {5, 1, 4, 2};
    bubbleSort(arr, 4);
    for(int i=0; i<4; i++) printf("%d ", arr[i]);
    return 0;
}
