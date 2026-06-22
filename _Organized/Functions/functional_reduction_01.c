/*
 * This program demonstrates higher-order functions in C by using a callback mechanism.
 * It defines a reduce function that accepts a custom operation (add or multiply) as a function pointer.
 * The main function reads an array and an operation choice, then applies the selected operation to reduce the array.
 */

#include <stdio.h>

int add(int a, int b){
    return a + b; 
}

int multiply(int a, int b) {
    return a * b; 
}

void reduce(int *arr, int n, int initialValue, int(*operation)(int, int)) {
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
