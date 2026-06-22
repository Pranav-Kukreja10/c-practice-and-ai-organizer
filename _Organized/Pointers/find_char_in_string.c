/*
 * This program demonstrates pointer arithmetic and string traversal in C.
 * It defines a function findChar that searches for a target character in a null-terminated string
 * by iterating through the string using a pointer. When the target is found, the function returns
 * the pointer to that character; otherwise, it returns NULL. The main function tests this by
 * searching for 'g' and 'z' in the word "programming" and prints the results.
 */

#include <stdio.h>

char* findChar(char *str, char target){
    char *ptr = str; 

    while (*ptr != '\0') {
        if (*ptr == target){
            return ptr; 
    }
        ptr++;
    }
    return NULL;
}

int main(){
    char word[] = "programming";
    
    // Find 'g'
    char *result1 = findChar(word, 'g');
    if (result1 != NULL) {
        // Printing a char pointer as a string (%s) prints from that address to the end
        printf("Found 'g'. The rest of the string is: %s\n", result1); 
    }
    
    // Find 'z'
    char *result2 = findChar(word, 'z');
    if (result2 == NULL) {
        printf("Character 'z' not found.\n");
    }
    return 0;
}
