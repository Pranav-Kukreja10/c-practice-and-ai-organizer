/*
 * This program calculates the length of a string without using the strlen() function.
 * It iterates through the string character by character until the null terminator '\0' is found.
 * The count of characters encountered before the null terminator is returned as the length.
 */

#include <stdio.h>

int stringLength(char *str){
    int count = 0;
    
    char *ptr = str; 

    while (*ptr != '\0'){
        count++; 
        ptr++; 
    }

    return count;
}

int main(){
    char greeting[] = "hello"; 
    char empty[] = "";

    printf("Length of %s is %d\n", greeting, stringLength(greeting));
    printf("Length of empty string is %d\n", stringLength(empty));
    return 0;
}
