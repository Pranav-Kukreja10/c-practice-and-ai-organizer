/*
 * This program removes all space characters from a given string.
 * It iterates through the input string and copies only non-space characters
 * into a new position, effectively compacting the string.
 * The function modifies the string in-place by using a counter to track
 * the position of the next character to be written.
 */

#include <stdio.h>

void removeSpaces(char str[]) {
    int count = 0; 
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] != ' '){
            str[count] = str[i]; 
            count++; 
        }
    }
    str[count] = '\0'; 
}

int main(){
    char str[] = "C Exam Tomorrow";
    removeSpaces(str);
    printf("No spaces: %s\n", str);
    return 0;
}
