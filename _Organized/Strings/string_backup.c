/*
 * This program demonstrates string handling in C.
 * It reads a line of text from the user and stores a backup copy.
 * The program then prints the original backup string to verify the copy operation.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char backup[100];

    printf("Enter a string: "); fgets(str, sizeof(str), stdin);

    strcpy(backup, str);

    printf("%s ", backup);
    return 0;
}
