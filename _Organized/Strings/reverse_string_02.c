/*
 * This program demonstrates string manipulation in C.
 * It reads a string and prints its characters in reverse order.
 * The approach uses the length of the string to start from the last character and iterate backwards.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[20] = "Hello World";
    int str_length = strlen(str); 

    for (int i = str[str_length-1]; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}
