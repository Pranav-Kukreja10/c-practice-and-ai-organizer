/*
 * This program reverses a given integer number.
 * It extracts digits from the end of the number using modulo operator
 * and builds the reversed number by multiplying the accumulator by 10
 * and adding the extracted digit in each iteration.
 */

#include <stdio.h>

int main(){
    int num = 4217; 

    int digit, reverse_num = 0;

    while (num > 0){
        digit = num % 10;
        reverse_num = reverse_num*10 + digit;
        num = num / 10; 
    }

    printf("%d", reverse_num);
    return 0;
}
