/*
 * This program finds and prints all prime numbers up to a user-specified limit.
 * It uses trial division up to the square root of each number for efficiency.
 * A number is prime if it has no divisors other than 1 and itself.
 */

#include <stdio.h>

int main(){
    int n; 

    printf("Enter a number: "); scanf("%d", &n); 

    for (int i = 2; i < n; i++)
    {
        int is_prime = 1; 

        for (int j = 2; j * j <= i; j++){
            if (i%j == 0){
                is_prime = 0;   
            }
        }
        if (is_prime == 1){
            printf("%d ", i);
        }
    }
    
    return 0;
}
