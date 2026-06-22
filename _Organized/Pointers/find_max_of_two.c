/*
 * This program finds the maximum of two integers using pointers.
 * The findmax function compares the values pointed to by two pointers
 * and returns the pointer to the larger value.
 * The main function reads two integers, calls findmax, and prints the maximum.
 */

#include <stdio.h>

int *findmax(int *ptr1, int *ptr2) {
    if (*ptr1 > *ptr2) {
        return ptr1; 
    }
    else{
        return ptr2; 
    }
}

int main(){
    int x, y; 
    scanf("%d %d", &x, &y); 

    int *maxPtr = findmax(&x, &y); 

    printf("%d\n", *maxPtr); 
    return 0;
}
