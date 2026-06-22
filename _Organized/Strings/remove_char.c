/*
 * This program removes all occurrences of a specified character from a string.
 * It uses a two-pointer technique where 'read' scans the string and 'write' tracks
 * the position for the next valid character to be kept. Characters matching the
 * target are skipped, while others are copied to the 'write' position.
 */

#include <stdio.h>

void removeChar(char *str, char target){
    if (str == NULL) return;

    char *read = str; 
    char *write = str; 

    while (*read != '\0'){
        if (*read != target) {
            *write = *read;
            write++;  
        }
        read++; 
    }
    *write = '\0';
}

int main(){
    char str[] = "hello world";
    
    removeChar(str, 'o');
    printf("Modified string: '%s'\n", str);
    return 0;
}
