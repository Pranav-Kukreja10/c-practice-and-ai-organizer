/*
 * This program demonstrates function pointers and pointer arithmetic operations.
 * It defines three basic arithmetic functions (add, subtract, multiply) that operate on integer values passed via pointers.
 * A function pointer array is used to store references to these functions, allowing dynamic selection of the operation based on user input.
 */

#include <stdio.h>

void add(int *a, int *b, int *result){
    *result = *a + *b; 
}

void subtract(int *a, int *b, int *result){
    *result = *a - *b; 
}

void multiply(int *a, int *b, int *resullt){
    *resullt = *a * *b; 
}

int main(){
    void (*ops[3])(int*, int*, int*) = {add, subtract, multiply}; 

    int choice, x, y, result = 0; 

    scanf("%d", &choice); 
    scanf("%d %d", &x, &y); 

    if (choice >= 0 && choice <= 2){
        ops[choice](&x, &y, &result); 
        printf("Result: %d\n", result); 
    }
    else{
        printf("Invalid Choice\n"); 
    }
    return 0;
}
