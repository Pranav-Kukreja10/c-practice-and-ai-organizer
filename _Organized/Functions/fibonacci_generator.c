/*
 * This program generates the first 10 Fibonacci numbers.
 * It uses a static helper function nextFibonacci() that maintains
 * internal state (a and b) across calls to produce the sequence.
 * The sequence starts with 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
 */

#include <stdio.h>

int nextFibonacci(){
    static int a = 0; 
    static int b = 1; 

    int current_val = a; 

    int next_val = a + b; 

    a = b; 
    b = next_val; 

    return current_val; 
}

int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", nextFibonacci());
    }
    
    return 0;
}
