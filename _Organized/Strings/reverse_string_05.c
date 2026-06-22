/*
 * This program reads a string from standard input and prints its reverse.
 * It uses dynamic memory allocation to create a new buffer for the reversed string.
 * The algorithm iterates from the end of the original string to the beginning,
 * copying each character to the corresponding position in the new buffer.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* createReversedString(char *orignal){
    int len = strlen(orignal); 

    char *reversed = (char *)malloc((len+1) * sizeof(char)); 

    for (int i = 0; i < len; i++){
        *(reversed + i) = *(orignal + len - 1 - i); 
    }

    *(reversed + len) = '\0';

    return reversed;
}
int main(){
    char str[100]; 

    scanf("%s", str); 

    char *revString = createReversedString(str); 

    printf("%s", revString);

    return 0;
}
