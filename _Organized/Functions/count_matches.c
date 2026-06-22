/*
 * This program demonstrates function pointers and higher-order functions in C.
 * It defines two helper functions to check if a number is positive or a multiple of three.
 * The core function countMatches accepts a function pointer as an argument, allowing dynamic behavior selection.
 * In main, the user chooses an operation via input, and countMatches applies the selected function to the array.
 */

#include <stdio.h>

int isPositive(int n) {
    if (n > 0){
        return 1; 
    }
    return 0; 
}

int isMultipleOfThree(int n) {
    if (n % 3 == 0) return 1; 
    return 0; 
}

int countMatches(int *arr, int size, int(*operation)(int)){
    int count = 0; 
    for (int i = 0; i < size; i++)
    {
        if (operation(arr[i])){
            count++; 
        }
    }
    printf("%d", count); 
}

int main(){
    int n; scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int choice; scanf("%d", &choice); 

    if (choice == 0) {
        countMatches(arr, n, isPositive); 
    }
    else if (choice == 1) {
        countMatches(arr, n, isMultipleOfThree); 
    }
    
    return 0;
}
