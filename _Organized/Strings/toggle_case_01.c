/*
 * This program toggles the case of each character in a string.
 * Uppercase letters are converted to lowercase and vice versa.
 * The toggleCase function iterates through the string and modifies characters in place.
 */

#include <stdio.h>
#include <string.h>

void toggleCase(char *ptr) {
    while (*ptr != '\0'){
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + 32; 
        }
        else if (*ptr >= 'a' && *ptr <= 'z'){
            *ptr = *ptr - 32;
        }
        ptr++;
    }
}

int main(){
    char str[100]; 
    printf("Input: "); gets(str); 

    toggleCase(str); 

    printf("%s", str); 
    return 0;
}
