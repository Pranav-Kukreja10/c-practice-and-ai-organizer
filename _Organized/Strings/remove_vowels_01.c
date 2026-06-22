/*
 * This program removes all vowels (a, e, i, o, u) from a given input string.
 * It uses a two-pointer technique: 'ptr' iterates through the original string,
 * while 'write' points to the position where non-vowel characters are copied.
 * The input is converted to lowercase before checking for vowels.
 */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100]; 
    scanf("%s", str); 

    char *ptr = str;

    char *write = str; 
    
    while (*ptr != '\0') {
        char c = tolower(*ptr); 

        if (!(c == 'a'|| c == 'e'|| c == 'i'|| c == 'o' || c == 'u')) {
            *write = *ptr; 
            write++;
        }
        ptr++; 
    }
    *write = '\0'; 

    printf("%s", str); 
    return 0;
}
