/*
 * This program calculates the length of a string without using the strlen() function.
 * It iterates through the character array until the null terminator '\0' is encountered.
 * The counter increments for each character found.
 */

#include <stdio.h>

int main(){
    char str[20] = "Hello World";
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("%d", length);
    
    return 0;
}
