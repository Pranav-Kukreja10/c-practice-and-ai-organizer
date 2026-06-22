/*
 * This program reads a string from the user that does not contain the '/' character.
 * It calculates the length of the string and then uses two pointers, start and end,
 * to swap characters from the beginning and end of the string until they meet.
 * This effectively reverses the string in-place using pointer arithmetic.
 */

#include <stdio.h>

int main(){
    char str[100]; 
    scanf("%[^/\n]", str);
    
    int len = 0; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        len++; 
    }
    

    char *ptr = str;
    char *start = ptr; 
    char *end = ptr + len - 1; 
    
    while (start < end) {
        char temp = *start; 
        *start = *end; 
        *end = temp; 

        start++; 
        end--; 
    }

    printf("%s", str); 
    return 0;
}
