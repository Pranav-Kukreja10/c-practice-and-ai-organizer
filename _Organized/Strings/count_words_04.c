/*
 * This program counts the number of words in a given input sentence.
 * It uses the strtok() function to split the input string by spaces.
 * The word count is incremented for each token found until the end of the string.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char sentence[100]; 
    int word_count = 0; 

    fgets(sentence, 20, stdin); 

    char *token = strtok(sentence, " ");

    while (token != NULL){
        word_count++; 
        token = strtok(NULL, " ");
    }
    
    printf("%d", word_count);
    return 0;
}
