/*
 * This program demonstrates the use of an array of pointers to store addresses of integer variables.
 * It reads three integers from the user, stores their addresses in a pointer array, and then calculates their sum by dereferencing the pointers.
 * Finally, it prints the computed sum to the console.
 */

#include <stdio.h>

int main(){
    int a, b, c;

    int *arr[3]; 

    arr[0] = &a;
    arr[1] = &b; 
    arr[2] = &c; 

    scanf("%d %d %d", &a, &b, &c); 

    int sum = *(arr[0]) + *(arr[1]) + *(arr[2]);

    printf("%d\n", sum); 
    return 0;
}
