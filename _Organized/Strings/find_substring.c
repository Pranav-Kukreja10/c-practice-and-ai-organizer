/*
 * This program finds the first occurrence of a substring within a main string.
 * It uses a nested loop approach: the outer loop iterates through each character of the main string,
 * and the inner loop checks for a match starting from the current position. If a complete match
 * is found, it returns the starting index; otherwise, it returns -1.
 */

#include <stdio.h>

int findSubstring(char *mainStr, char *subStr){

    int i = 0, j = 0; 

    while (mainStr[i] != '\0') {
        if (mainStr[i] == subStr[0]){
            int match = 1; 
            j = 0; 

            while (subStr[j] != '\0'){
                if (mainStr[i + j] != subStr[j]) {
                    match = 0; 
                    break;
                }
                j++; 
            }
            if (match == 1){
                return 1; 
            }
        }
        i++; 
    }
    return -1; 
}

int main(){
    char mainStr[1005], subStr[1005];
    
    scanf("%s", mainStr);
    scanf("%s", subStr);
    
    int index = findSubstring(mainStr, subStr);
    
    if (index != -1) {
        printf("Found at index: %d\n", index);
    } else {
        printf("-1\n");
    }
    return 0;
}
