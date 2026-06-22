/*
 * This program finds the minimum and maximum elements in an array.
 * It uses a single pass algorithm to iterate through the array once,
 * comparing each element with the current minimum and maximum values.
 * The function takes the array, its size, and pointers to store the results.
 */

#include <stdio.h>

void findMinMax(int arrp[], int size, int *min, int *max); 

int main(){
    int arr[100], size, min, max; 
    
    printf("Enter size of array: "); 
    scanf("%d", &size); 

    printf("Enter elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); 
    }

    findMinMax(arr, size, &min, &max); 

    printf("Maximum element: %d\n", max); 
    printf("Minimum Element: %d\n", min);
     
    return 0;
}

void findMinMax(int arr[], int size, int *min, int *max){
    *min = arr[0];
    *max = arr[0]; 

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < *min) {
            *min = arr[i]; 
        }

        if (arr[i] > *max){
            *max = arr[i]; 
        }
        
    }
    
}
