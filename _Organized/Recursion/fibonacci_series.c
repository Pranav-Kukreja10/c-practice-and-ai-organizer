/*
 * This program generates the Fibonacci series up to a user-specified number of terms.
 * It uses an iterative approach where two variables track the current and next numbers
 * in the sequence, updating them in each loop iteration.
 */

#include <stdio.h>

int main(){
    int n, first = 0, second = 1, next;
    
    printf("Enter a number: "); scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(int i = 0; i < n; i++){
        printf("%d ", first);
        next = first + second; 
        first = second; 
        second = next; 
    }
    return 0;
}
