/*
 * This program removes all space characters from a user-input string.
 * It uses a two-pointer technique where 'read' scans the input and 'write'
 * points to the position where non-space characters are copied.
 * The result is a compacted string with no spaces.
 */

#include <stdio.h>

int main(){
    char str[150]; 
    scanf("%[^\n]s", str); 

    char *read = str; 
    char *write = str; 

    while (*read != '\0') {
        if (*read != ' ') {
            *write = *read; 
            write++; 
        } 
        read++; 
    }

    *write = '\0'; 

    printf("%s\n", str); 
    return 0;
}
