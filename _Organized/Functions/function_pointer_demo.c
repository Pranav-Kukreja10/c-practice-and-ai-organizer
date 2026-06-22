/*
 * This program demonstrates function pointers in C.
 * It defines mathematical operations (square and cube) and passes them as arguments to a generic function.
 * The printMathReturn function accepts a number and a pointer to a function, dynamically invoking the operation.
 */

#include <stdio.h>

int square(int n){
    return n * n;
}

int cube(int n){
    return n*n*n;
}

void printMathReturn(int num, int (*operation)(int)) {
    int result = operation(num); 
    printf("Result of operation: %d\n", result); 
}


int main(){
    int num; 
    printf("Enter a number: "); scanf("%d", &num);

    printMathReturn(num, &square); 
    printMathReturn(num, &cube);
    return 0;
}
