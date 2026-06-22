/*
 * This program checks for prime numbers up to a user-specified limit.
 * It uses a helper function isPrime() that efficiently determines primality by testing divisors up to the square root.
 * The main function iterates from 0 to N-1, printing each number that is identified as prime.
 */

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0){
            return 0; 
        }

        
    }
    return 1; 
    
}

int main(){
    int n; 
    printf("Enter upper limit N: "); 
    scanf("%d", &n); 

    for (int i = 0; i < n; i++)
    {
        if(isPrime(i) == 1){
            printf("%d ", i);
        }
    }
    
    return 0;
}
