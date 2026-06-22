/*
 * This program finds the longest string in an array of strings.
 * It iterates through each string, calculates its length using strlen(), and tracks the maximum length found so far.
 * Finally, it prints the longest string and its length.
 */

#include <stdio.h>
#include <string.h>

void findLongestTitle(char *games[], int size){
    int maxLength = 0;
    int longestIndex = 0;

    for (int i = 0; i < size; i++)
    {
        int currentLength = strlen(games[i]); 

        if (currentLength > maxLength){
            maxLength = currentLength; 
            longestIndex = i; 
        }

        
    }
    printf("%s %d\n", games[longestIndex], maxLength);
    
}

int main(){

    char *library[] = {
        "Minecraft", 
        "Red Dead Redemption 2", 
        "Forza Horizon 5", 
        "Detroit: Become Human"
    };

    findLongestTitle(library, 4);

    return 0;
}
