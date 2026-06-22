/*
 * This program checks if a given string is an isogram.
 * An isogram is a word or phrase where no letter appears more than once.
 * The algorithm uses a pointer to traverse the string and a frequency array to track seen characters.
 */

#include <stdio.h>

int main(){
    char str[100];
    scanf("%s", str); 

    char *ptr = str; 
    int seen[256] = {0}; 
    int is_isogram = 1; 

    while (*ptr != '\0') {
        int index = *ptr;
        
        if (seen[index] == 1) {
            is_isogram = 0;
            break;
        }
        seen[index] = 1; 
        ptr++; 
    }

    if (is_isogram == 1) {
        printf("Isogram"); 
    }
    else{
        printf("Not"); 
    }
    return 0;
}
