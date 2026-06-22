/*
 * This program demonstrates the use of function pointers in C.
 * It defines two arithmetic operations (addition and multiplication) and a generic compute function that accepts a function pointer as an argument.
 * The main function passes different operation functions to compute, showcasing how to achieve polymorphic behavior through function pointers.
 */

#include <stdio.h>

int add(int a, int b){
    return a + b; 
}

int multiply(int a, int b){
    return a * b; 
}

int compute(int x, int y, int (*operation)(int, int)){
    return operation(x, y); 
}

int main(){
    int num1 = 4, num2 = 5;

    // Passing the 'add' function pointer
    int sum = compute(num1, num2, add);
    
    // Passing the 'multiply' function pointer
    int product = compute(num1, num2, multiply);

    printf("Input: %d, %d\n", num1, num2);
    printf("Addition: %d\n", sum);
    printf("Multiplication: %d\n", product);
    return 0;
}
