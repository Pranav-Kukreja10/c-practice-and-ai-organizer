/*
 * This program demonstrates string concatenation using pointer manipulation.
 * The stringAppend function finds the end of the destination string and appends
 * the source string character by character until the null terminator is reached.
 * It avoids using standard library functions like strcat to show manual implementation.
 */

#include <stdio.h>

void stringAppend(char *dest, char *src){
    char *d_ptr = dest; 
    char *s_ptr = src; 

    while (*d_ptr != '\0'){
        d_ptr++;
    }

    while (*s_ptr != '\0') {
        *d_ptr = *s_ptr; 
        d_ptr++; 
        s_ptr++;
    }

    *d_ptr = '\0';
}

int main(){
    char message[50] = "Hello "; 
    char add_on[] = "World";
    
    stringAppend(message, add_on);
    
    printf("Combined string: '%s'\n", message);
    return 0;
}
