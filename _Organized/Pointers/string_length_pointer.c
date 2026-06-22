/*
 * This program calculates the length of a user-entered string using pointer arithmetic.
 * It uses two pointers: start_ptr pointing to the beginning and end_ptr moving to the null terminator.
 * The length is determined by the difference between the end and start pointers.
 */

#include <stdio.h>

int main(){
    char str[100];

    printf("Enter String: "); 
    scanf("%s", str); 

    char *start_ptr = str; 
    char *end_ptr = str;
    
    while (*end_ptr != '\0')
    {
        end_ptr++;
    }

    int length = end_ptr - start_ptr; 

    printf("Length of string: %d\n", length);
    
    return 0;
}
