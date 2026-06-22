/*
 * This program validates the length of a user-entered password string.
 * It reads a password from standard input and checks if its length is between 8 and 15 characters inclusive.
 * If the length is outside this range, it prints 'Error'; otherwise, it prints 'Valid'.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char password[50];
    scanf("%s", password); 

    int len = strlen(password);

    if (len < 8 || len > 15){
        printf("Error");
    }
    else{
    printf("Valid");
    }
    
    return 0;
}
