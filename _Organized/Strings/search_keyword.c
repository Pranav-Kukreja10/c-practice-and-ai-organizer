/*
 * This program searches for a user-provided keyword within a predefined sentence.
 * It uses the strstr() function to locate the substring and reports whether the keyword is found.
 * The program handles basic input/output for string searching operations.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char sentence[] = "The quick brown fox jumps over the lazy dog.";
    char keyword[20];

    printf("Enter search term: "); scanf("%s", keyword);

    if (strstr(sentence, keyword) != NULL){
        printf("Keyword Found\n");
    }
    else{
        printf("Keyword not Found\n");
    }
    return 0;
}
