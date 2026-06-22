/*
 * This program demonstrates pointer arithmetic and dereferencing in C.
 * The mystery function increments the integer value pointed to by the pointer and prints it.
 * The main function shows the difference between incrementing the value (*ptr++) vs incrementing the pointer itself (ptr++).
 */

#include <stdio.h>

void mystery(int *p){
    (*p)++;
    printf("%d ", *p);
}

int main(){
    int arr[] = {10, 20, 30};
    int *ptr = arr; 

    mystery(ptr);
    printf("%d ", *ptr++); 
    printf("%d\n", *ptr);
    return 0;
}
