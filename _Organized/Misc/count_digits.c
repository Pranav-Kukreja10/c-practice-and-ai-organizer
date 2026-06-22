/*
 * This program counts the number of digits in a positive integer.
 * It repeatedly divides the number by 10 until it becomes zero,
 * incrementing a counter for each division.
 */

#include <stdio.h>

int main(){
    int num = 34201;
    
    int count = 0; 

    while (num > 0){
        count++;
        num = (num / 10); 
    }

    printf("%d", count);
    return 0;
}
