/*
 * This program searches for a keyword within a user-provided text string.
 * It reads a line of text and a keyword, then uses strstr() to check if the keyword exists in the text.
 * Outputs a message indicating whether the keyword was found or not.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char text[100]; 
    char keyword[20]; 

    scanf("%[^\n]s", text); 

    getchar(); 

    scanf("%s", keyword); 

    if (strstr(text, keyword) !=NULL){
        printf("Keyword Found\n"); 
    }
    else{
        printf("Keyword Not found");
    }
    return 0;
}
