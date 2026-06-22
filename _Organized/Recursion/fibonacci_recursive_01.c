/*
 * This program calculates the nth Fibonacci number using recursion.
 * The Fibonacci sequence is defined as: F(0)=0, F(1)=1, and F(n)=F(n-1)+F(n-2) for n>1.
 * The recursive approach directly translates this mathematical definition into code.
 */

#include <stdio.h>

int fib(int n){
    if (n<=1){
        return n; 
    }
    return fib(n-1) + fib(n-2); 
}

int main(){
    int n; 
    printf("Enter a number: "); scanf("%d", &n); 
    printf("%d", fib(n));
    return 0;
}
