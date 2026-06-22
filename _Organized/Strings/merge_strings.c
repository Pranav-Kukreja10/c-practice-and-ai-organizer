/*
 * This program merges two input strings by alternating characters from each string.
 * It reads two words and interleaves them character by character into a merged result.
 * The process continues until both input strings are fully consumed, then null-terminates the result.
 */

#include <stdio.h>

int main(){
    char word1[105], word2[105]; 

    char merged[210]; 

    scanf("%s %s", word1, word2); 

    int i = 0; 
    int j = 0;
    int index = 0;

    while (word1[i] != '\0' || word2[i] != '\0')
    {
        if (word1[i] != '\0'){
            merged[index] = word1[i];
            index++;
            i++;
        }

        if (word2[j] != '\0') {
            merged[index] = word2[j];
            index++;
            j++;
        }
    }

    merged[index] = '\0';
    printf("%s\n", merged);
    
    return 0;
}
