/*
 * This program validates a user-entered promo code.
 * It reads a string input and compares it against the predefined valid code "SALE70".
 * If the input matches exactly, it prints "Success!"; otherwise, it prints "Invalid Code".
 */

#include <stdio.h>
#include <string.h>

int main(){
    char code[20]; 
    printf("Enter promo code: "); scanf("%s", code); 

    if (strcmp(code, "SALE70") == 0){
        printf("Success!");
    }

    else{
        printf("Invalid Code");
    }
    return 0;
}
