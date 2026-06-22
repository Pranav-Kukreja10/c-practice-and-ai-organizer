/*
 * This program checks if a given string consists of consecutive alphabetical characters.
 * It iterates through the string and verifies that the ASCII difference between adjacent characters is exactly 1.
 * The function returns 1 if the condition holds for all adjacent pairs, otherwise 0.
 */

#include <stdio.h>

int isAlphabetical(char str[]) {
    for (int i = 0; str[i + 1] != '\0'; i++)
    {
        if (str[i + 1] - str[i] !=1) {
            return 0; 
        }
    }

    return 1; 
    
}

int main(){
    printf("\"cdef\" consecutive? %d\n", isAlphabetical("cdef"));
    printf("\"ace\" consecutive? %d\n", isAlphabetical("ace"));
    return 0;
}
