/*
 * This program finds the index of a target character within a string.
 * It uses the strchr() function to locate the first occurrence of the character.
 * The index is calculated by subtracting the base address of the string from the pointer returned by strchr().
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100]; 
    char target; 

    scanf("%s", str); 
    scanf(" %c", &target); 

    char *ptr = strchr(str, target); 

    if (ptr != NULL) {
        int index = ptr - str; 
        printf("%d", index); 
    }
    else{
        printf("Not Found"); 
    }
    return 0;
}
