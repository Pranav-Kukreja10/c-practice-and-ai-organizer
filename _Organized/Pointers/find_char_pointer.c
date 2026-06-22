/*
 * This program searches for a target character in a string using pointer arithmetic.
 * It iterates through the string by incrementing the pointer until the target is found or the null terminator is reached.
 * The index of the first occurrence of the target character is printed if found, otherwise 'Not Found' is displayed.
 */

#include <stdio.h>

int main(){
    char str[100]; 
    char target; 

    scanf("%s", str); 
    scanf(" %c", &target); 

    char *ptr = str; 

    int index = 0;

    while (*ptr != '\0'){
        
        if (*ptr == target){
            printf("%d", index); 
            return 0; 
        } 
        index++;
        ptr++; 
    }

    printf("Not Found\n"); 
    return 0;
}
