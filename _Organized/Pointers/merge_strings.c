/*
 * This program merges two input strings into a single result string.
 * It uses pointer arithmetic to traverse both input strings simultaneously.
 * For each character in the first string, it copies it to the result, then does the same for the second string.
 * The loop terminates when either input string reaches its null terminator.
 */

#include <stdio.h>

int main(){
    char str1[50], str2[50], result[100]; 

    scanf("%s", str1); 
    scanf("%s", str2); 

    char *ptr1 = str1; 
    char *ptr2 = str2; 
    char *ptrRes = result; 

    while (*ptr1 != '\0' && *ptr2 != '\0' ) {
        *ptrRes = *ptr1; 
        ptrRes++; 
        ptr1++; 

        *ptrRes = *ptr2; 
        ptrRes++; 
        ptr2++; 
    }

    *ptrRes = '\0'; 

    printf("%s", result); 
    return 0;
}
