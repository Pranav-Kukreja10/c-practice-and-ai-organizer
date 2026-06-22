/*
 * This program calculates the sum of all digits of a given integer using recursion.
 * The recursive function num_sum extracts the last digit (n % 10) and adds it to
 * the sum of the remaining digits obtained by recursively calling num_sum(n/10).
 * The base case is when n equals 0, at which point the recursion stops and returns 0.
 */

#include <stdio.h>

int num_sum(int n){
    if (n == 0) return 0; 

    return n % 10 + num_sum(n/10); 
}

int main(){
    int n; 
    scanf("%d", &n); 

    printf("%d", num_sum(n)); 
    return 0;
}
