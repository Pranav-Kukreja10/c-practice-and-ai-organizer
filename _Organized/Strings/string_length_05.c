/*
 * This program calculates the length of a string entered by the user.
 * It uses a custom function stringLength() that iterates through the
 * character array until the null terminator '\0' is encountered.
 * The function returns the count of characters excluding the null terminator.
 */

#include <stdio.h>

int stringLength(char *str){
    int count = 0;

    while (*str != '\0'){
        count++; 
        str++;
    }
    return count; 
}



int main(){
    char word[100]; 
    printf("Enter a word: "); scanf("%s", word); 

    int Length = stringLength(word); 

    printf("%d", Length); 
    return 0;
}
