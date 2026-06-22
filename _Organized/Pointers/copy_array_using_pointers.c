/*
 * This program demonstrates array copying using pointer arithmetic.
 * It reads 'n' integers into a source array, then uses two pointers
 * to iterate through the arrays simultaneously, copying each element
 * from source to destination. Finally, it prints the copied array.
 */

#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n); 

    int source[n], dest[n]; 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &source[i]); 
    }

    int *ptrSrc = source; 
    int *ptrDest = dest; 

    for (int i = 0; i < n; i++)
    {
        *ptrDest = *ptrSrc; 
        ptrSrc++; 
        ptrDest++; 
    }
    
    ptrDest = dest; 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptrDest + i)); 
    }
    
    
    return 0;
}
