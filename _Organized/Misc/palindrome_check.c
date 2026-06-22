/*
 * This program checks if a given integer is a palindrome.
 * It reads an integer from the user, reverses its digits, and compares
 * the reversed number with the original. If they match, it prints 'Yes';
 * otherwise, it prints 'No'.
 */

#include <stdio.h>

int main(){
    int num; 
    printf("Enter a number: "); scanf("%d", &num);
    int n = num; 

    int reversed_num = 0, digit; 

    while (num > 0){
        digit = num % 10;
        reversed_num = reversed_num*10 + digit; 
        num = num / 10;
    }


    if (reversed_num == n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
