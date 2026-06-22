/*
 * This program demonstrates string concatenation in C.
 * It defines a function stringConcat that appends a source string to a destination string.
 * The function first finds the end of the destination string, then copies characters from the source.
 * Test cases in main() show concatenation with pre-filled strings and empty strings.
 */

#include <stdio.h>

void stringConcat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++; 
    }

    while (*src != '\0') {
        *dest = *src; 
        dest++;
        src++; 
    } 

    *dest = '\0'; 
}

int main(){
    char dest1[50] = "Hello ";
    char dest2[50] = "C ";
    char dest3[50] = "";

    stringConcat(dest1, "World");
    stringConcat(dest2, "Pointers");
    stringConcat(dest3, "Test");

    printf("Test 1 Output: \"%s\"\n", dest1);
    printf("Test 2 Output: \"%s\"\n", dest2);
    printf("Test 3 Output: \"%s\"\n", dest3);
    return 0;
}
