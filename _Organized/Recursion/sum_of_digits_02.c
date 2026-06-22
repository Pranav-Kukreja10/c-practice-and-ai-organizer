/*
 * This program calculates the sum of digits of a given integer using recursion.
 * The function sum_of_digits extracts the last digit (n % 10) and adds it to
 * the sum of digits of the remaining number (n / 10) until n becomes 0.
 */

#include <stdio.h>

int sum_of_digits(int n){
    if (n == 0){
        return 0; 
    }

    return (n%10) + sum_of_digits(n/10);
}

int main(){
    int num1 = 456; 
    int num2 = 9021; 

    printf("%d\n", sum_of_digits(num1));
    printf("%d\n", sum_of_digits(num2));
    return 0;
}
