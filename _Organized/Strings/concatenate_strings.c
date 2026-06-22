/*
 * This program concatenates two strings with a length limit.
 * It reads two input strings and an integer n, then copies the first n characters
 * of the first string into a result buffer, null-terminates it, and appends
 * the first n characters of the second string to the result.
 * Key functions used: strncpy() and strncat() for safe string manipulation.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str1[50], str2[50];
    int n; 
    
    scanf("%s", str1); 
    scanf("%s", str2); 
    scanf("%d", &n);
    
    char result[100]; 

    strncpy(result, str1, n); 

    result[n] = '\0'; 

    strncat(result, str2, n); 

    printf("%s\n", result);
    
    return 0;
}
