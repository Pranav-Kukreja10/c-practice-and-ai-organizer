/*
 * This program calculates the length of a string entered by the user.
 * It uses a pointer to traverse the string character by character until the null terminator '\0' is found.
 * The length is incremented for each character encountered during the traversal.
 */

#include <stdio.h>

int main(){
    char str[100]; 
    scanf("%s", str); 

    char *ptr = str; 
    int length = 0; 

    while (*ptr != '\0') {
        length++; 
        ptr++; 
    }

    printf("%d\n", length); 
    return 0;
}
