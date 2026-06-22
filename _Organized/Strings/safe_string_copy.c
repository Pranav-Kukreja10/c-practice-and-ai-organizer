/*
 * This program demonstrates safe string handling to prevent buffer overflow vulnerabilities.
 * It uses strncpy() to copy a limited number of characters from a user input string to a fixed-size buffer.
 * A null terminator is explicitly added at the end to ensure the resulting string is properly terminated.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char input[50] = "superuser007"; 
    char safe_username[11]; 

    strncpy(safe_username, input, 10);
    
    safe_username[10] = '\0'; 

    printf("%s", safe_username); 
    return 0;
}
