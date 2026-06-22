/*
 * This program reads a line of text from standard input and converts it to title case.
 * It iterates through each character, converting lowercase letters to uppercase when they start a new word,
 * and converting uppercase letters to lowercase when they appear in the middle of a word.
 * Spaces and tabs are treated as word separators to determine when a new word begins.
 */

#include <stdio.h>

int main(){
    char str[150];

    scanf("%[^\n]s", str); 

    char *ptr = str; 
    int new_word = 1; 

    while (*ptr != '\0') {
        if (*ptr == ' ' || *ptr == '\t') {
            new_word = 1; 
        }
        else {
        if(new_word == 1) {
            if (*ptr >= 'a' && *ptr <= 'z') {
                *ptr = *ptr - 32; 
            }
            new_word = 0; 
        } else {
            if (*ptr >= 'A' && *ptr <= 'Z') {
                *ptr = *ptr + 32; 
            }
        }
    }
        ptr++; 
    }

    printf("%s\n", str); 

    return 0;
}
