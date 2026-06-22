/*
 * This program calculates the sum of digits of a given integer using recursion.
 * The recursive approach breaks down the number by taking the last digit (n % 10)
 * and adding it to the sum of the remaining digits (n / 10).
 * Base case: when n is 0, the recursion stops and returns 0.
 */

#include <stdio.h>

int sumOfDigits(int n){
    if (n == 0){
        return 0; 
    }

    return (n % 10) + sumOfDigits(n/10); 
 }

int main(){
    int num; 
    printf("Enter a number: "); scanf("%d", &num); 

    printf("%d", sumOfDigits(num)); 
    return 0;
}
