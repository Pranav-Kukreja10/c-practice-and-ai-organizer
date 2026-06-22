/*
 * This program calculates the sum of n integers entered by the user.
 * It uses dynamic memory allocation with malloc to create an array of integers.
 * The program demonstrates pointer arithmetic by using (arr + i) to access elements.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, sum = 0; 

    printf("Enter number of elements"); scanf("%d", &n); 

    int *arr = (int *)malloc(n * sizeof(int)); 

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers: ", n); 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i); 
    }

    printf("%d", sum);

    free(arr);
    
    
    return 0;
}
