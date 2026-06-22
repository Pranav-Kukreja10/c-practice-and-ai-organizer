/*
 * This program demonstrates string copying using a custom function.
 * It iterates through the source string character by character until the null terminator is reached.
 * The destination buffer is updated with each character, and a null terminator is appended at the end.
 */

#include <stdio.h>

void copyString(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src; 
        dest++; 
        src++; 
    }

    *dest = '\0'; 
}

int main(){
    char source[] = "Exam Success!";
    char destination[50]; // Make sure it's big enough
    
    copyString(destination, source);
    
    printf("Copied String: %s\n", destination);
    return 0;
}
