/*
 * This program demonstrates higher-order functions in C by using a generic reduce function that accepts a custom operation callback.
 * It supports two operations: addition and multiplication, selected via a user choice.
 * The reduce function iterates over an array, applying the provided operation cumulatively to an initial value.
 */

#include <stdio.h>

int add(int a, int b){
    return a + b; 
}

int multiply(int a, int b) {
    return a * b; 
}

int reduce(int *arr, int n, int initialValue, int(*operation)(int, int)) {
    int result = initialValue; 

    for (int i = 0; i < n; i++)
    {
        result = operation(result, *(arr+i)); 
    }

    return result; 
    
}

int main(){
    int n; scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int choice; scanf("%d", &choice);
    
    int finalResult; 

    if (choice == 0) {
        finalResult = reduce(arr, n, 0, add); 
    }
    else if (choice == 1){
        finalResult = reduce(arr, n, 1, multiply); 
    }

    printf("%d", finalResult); 

    
    return 0;
}
