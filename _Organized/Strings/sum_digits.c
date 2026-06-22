/*
 * This program reads a string from standard input and calculates the sum of all digit characters found within it.
 * It iterates through each character of the string using a pointer, checks if the character is a digit (0-9),
 * and if so, converts it to its integer value and adds it to the running sum.
 */

#include <stdio.h>

int main(){
    char str[150]; 
    scanf("%s", str); 

    char *ptr = str; 
    int sum = 0; 

    while (*ptr != '\0') {
        if (*ptr >= '0' && *ptr <= '9') {
            sum += (*ptr - '0'); 
        }
        ptr++; 
    }

    printf("%d\n", sum); 
    return 0;

}
