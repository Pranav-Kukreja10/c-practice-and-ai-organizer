/*
 * This program implements a custom sorting mechanism using the Bubble Sort algorithm.
 * It accepts a user-defined comparison function to determine the sort order.
 * The user can choose to sort in ascending or descending order by passing different comparator functions.
 */

#include <stdio.h>

int islesser(int a, int b) {
    return a > b; 
}

int isgreater(int a, int b) {
    return a < b; 
}

void customSort(int *arr, int n, int (*compare)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1])){
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            }
        }
        
    }
}

int main(){
    int n, choice; 
    scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &choice); 

    if (choice == 0) {
        customSort (arr, n, islesser); 
    }
    else if (choice == 1) {
        customSort (arr, n, isgreater); 
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); 
    }
    
    
    return 0;
}
