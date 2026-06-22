/*
 * This program demonstrates pointer comparison and return.
 * It defines a function that takes two integer pointers and returns
 * the pointer to the larger of the two values.
 * The main function tests this by comparing two integers and printing
 * the address and value of the larger one.
 */

#include <stdio.h>

int* findlarger(int* a, int* b){
    if (*a > *b){
        return a; 
    }
    else{
        return b; 
    }
}

int main(){
    int num1 = 10, num2 = 15;

    int *larger_ptr = findlarger(&num1, &num2);

    printf("The address of Larger number is: %p\n", larger_ptr);
    printf("The value of Larger number is: %d\n", *larger_ptr);
    return 0;
}
