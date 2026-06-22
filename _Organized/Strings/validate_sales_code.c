/*
 * This program validates a sales code input.
 * It reads a string from standard input and checks if it matches the predefined code 'SALE70'.
 * If the input matches exactly, it prints 'Valid', otherwise it prints 'Invalid'.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char input[50]; 

    scanf("%s", input); 

    if (strcmp(input, "SALE70") == 0){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
