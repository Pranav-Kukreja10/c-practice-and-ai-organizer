/*
 * This program checks if a given integer is a prime number.
 * It reads an integer from the user and iterates from 2 up to n/2 to check for divisibility.
 * If any divisor is found, the number is not prime; otherwise, it is prime.
 */

#include <stdio.h>

int main(){
    int n; 

    printf("Enter a number: "); scanf("%d", &n); 
    int is_prime = 1;
    for (int i = 2; i<= n/2; i++){
        if (n<2){
            printf("Not Prime");
            break;
        }

        if (n%i ==0){
            is_prime = 0;
        }
    }

    if (is_prime == 1){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }

    return 0;
}
