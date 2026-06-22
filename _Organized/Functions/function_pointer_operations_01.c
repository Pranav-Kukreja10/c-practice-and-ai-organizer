/*
 * This program demonstrates the use of function pointers in C.
 * It defines three basic arithmetic functions (add, subtract, multiply) and stores their addresses in an array of function pointers.
 * The main function allows the user to select an operation via a menu choice, retrieves the corresponding function pointer from the array,
 * and executes the selected operation with hardcoded operands (10 and 15).
 */

#include <stdio.h>

int add(int a, int b){
    return a + b; 
}

int subtract(int a, int b){
    return a - b; 
}

int multiply(int a, int b){
    return a * b; 
}

int main(){
    int (*calc[3])(int, int) = {&add, &subtract, &multiply};

    int choice, num1, num2; 

    printf("Enter your choice: "); scanf("%d", &choice);

    num1 = 10, num2 = 15;

    printf("%d\n", (*calc[choice])(num1, num2));
    return 0;
}
