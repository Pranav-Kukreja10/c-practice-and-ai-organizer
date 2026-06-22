/*
 * This program calculates the length of a given string.
 * It iterates through the string character by character until the null terminator '\0' is found.
 * The count of characters before the null terminator is printed as the string length.
 */

#include <stdio.h>

void my_strlen(const char *str){
    int len = 0; 
    while (str[len] != '\0'){
        len++;
    }
    printf("%d\n", len);
}

int main(){
    my_strlen("Hello");
    my_strlen("Hello World!");
    return 0;
}
