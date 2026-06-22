/*
 * This program reads an array size and elements, then validates them based on a user choice.
 * If choice 0 is selected, it checks if all elements are even numbers.
 * If choice 1 is selected, it checks if all elements are prime numbers.
 * The helper functions isEven and isPrime are used for validation.
 */

#include <stdio.h>

int isEven(int n) {
    if (n % 2 == 0) return 1; 
}

int isPrime(int n){
    if (n < 2) return 0;
        
    for (int i = 2; i * i < n; i++)
    {
            if (n % i == 0) return 0; 
    }

    return 1; 
}


int main(){
    int n; scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]); 

    int choice; scanf("%d", &choice); 

    if (choice == 0) {
        for (int i = 0; i < n; i++)
        {
            if (!(isEven(arr[i]))) {
                printf("Invalid"); 
                return 0; 
            }
        }
        printf("Valid"); 
        return 0; 
    }
    if (choice == 1) {
        for (int i = 0; i < n; i++)
        {
            if (!(isPrime(arr[i]))) {
                printf("Invalid"); 
                return 0; 
            }
        }
        printf("Valid"); 
        return 0; 
    }
    
    return 0;
}
