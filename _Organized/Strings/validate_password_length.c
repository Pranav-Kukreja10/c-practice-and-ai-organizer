/*
 * This program validates a user-entered password based on length constraints.
 * It reads a string input and checks if the length is between 8 and 15 characters inclusive.
 * The program uses strlen() to determine the length and prints 'Password Valid' or 'Error' accordingly.
 */

#include <stdio.h>
#include <string.h>


int main(){
    char pass[50]; 
    printf("Enter Password: ");
    scanf("%s", pass); 

    int len = strlen(pass); 

    if (len >= 8 && len <= 15){
        printf("Password Valid");
    }
    else{
        printf("Error");
    }
    return 0;
}
