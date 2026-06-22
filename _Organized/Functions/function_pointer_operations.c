/*
 * This program demonstrates the use of function pointers to perform arithmetic operations.
 * It defines four functions (add, subtract, multiply, division) and stores their addresses in an array.
 * The user selects an operation via input, and the corresponding function is invoked dynamically.
 */

#include <stdio.h>

float add(float a, float b){
    return a + b; 
}

float subtract(float a, float b){
    return a - b; 
}

float multiply(float a, float b){
    return a * b; 
}

float division(float a, float b){
    if (b == 0){
        return 1; 
    }
    else{
        return a / b; 
    }
}

int main(){
    float (*operations[4])(float, float) = {add, subtract, multiply, division}; 

    int choice; 
    float num1, num2; 

    scanf("%d", &choice); 

    if (choice >=0 && choice <= 3){
        printf("Enter two numbers: "); scanf("%f %f", &num1, &num2); 

        float result = operations[choice](num1, num2); 

        printf("Result: %.2f", result); 
    }
    else{
        printf("Invalid Choice"); 
    }
    return 0;
}
