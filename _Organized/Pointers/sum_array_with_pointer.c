/*
 * This program calculates the sum of elements in an array using pointer arithmetic.
 * It reads an integer n, then reads n integers into an array.
 * Instead of using index-based access (arr[i]), it uses a pointer (ptr) that
 * is incremented after each access to traverse the array and accumulate the sum.
 */

#include <stdio.h>

int main(){
    int n; scanf("%d", &n); 

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    int sum = 0; 
    int *ptr = arr; 

    for (int i = 0; i < n; i++)
    {
        sum += *ptr; 
        ptr++; 
    }

    printf("%d\n", sum); 
    
     
    return 0;
}
