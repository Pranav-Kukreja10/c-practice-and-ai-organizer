/*
 * This program removes all vowels (a, e, i, o, u) from a given input string.
 * It uses a two-pointer technique where 'read' scans the original string and 'write'
 * points to the position where non-vowel characters are copied.
 * The input is read until a newline character is encountered.
 */

#include <stdio.h>
#include <ctype.h>

int main(){
    char str[150]; 
    scanf("%[^\n]s", str); 

    char *read = str; 
    char *write = str; 

    while (*read != '\0')
    {
        char c = tolower(*read); 

        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){
            *write = *read; 
            write++; 
        }
        read++; 
    }

    *write = '\0'; 
    
    printf("%s\n",str); 
    
    return 0;
}
