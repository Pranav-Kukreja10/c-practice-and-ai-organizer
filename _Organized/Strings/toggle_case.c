/*
 * This program toggles the case of each character in a string.
 * Lowercase letters are converted to uppercase and vice versa.
 * The function modifies the string in-place using standard library functions.
 */

#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]); 
        }
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]); 
        }
    }
}

int main(){
    char str[] = "aBcD";
    toggleCase(str);
    printf("Toggled: %s\n", str);
    return 0;
}
