/*
 * This program removes duplicate characters from a string in-place.
 * It iterates through the string and for each character, it copies all
 * subsequent unique characters to a new position, effectively removing
 * duplicates while preserving the order of first occurrences.
 */

#include <stdio.h>

void removeDuplicates(char *str) {
    char *current = str; 

    while (*current != '\0') {
        char *runner = current + 1; 
        char *writer = current + 1; 

        while (*runner != '\0'){
            if (*runner != *current) {
                *writer = *runner; 
                writer++; 
            }
            runner++; 
        }
        *writer = '\0'; 
        current++; 
    }
}

int main(){
    char str[105]; 
    scanf("%100s",str); 

    removeDuplicates(str); 

    printf("%s", str); 
    return 0;
}
