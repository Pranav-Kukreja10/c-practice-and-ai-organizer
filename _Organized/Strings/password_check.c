/*
 * This program demonstrates string comparison using strcmp().
 * It compares a user-entered password against a hardcoded master key.
 * Access is granted only if the strings match exactly.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char masterKey[] = "admin123";
    char input[50];

    printf("Enter Password: "); scanf("%s", input);

    if (strcmp(input, masterKey) == 0){
        printf("Access Granted!");
    }
    else{
        printf("Access Denied!"); 
    }
    return 0;
}
