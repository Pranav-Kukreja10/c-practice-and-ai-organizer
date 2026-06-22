/*
 * This program removes all occurrences of a specified character from a string.
 * It uses a two-pointer approach where one pointer reads the original string
 * and another writes the filtered characters to a new position.
 * The string is null-terminated after processing to ensure valid C string.
 */

#include <stdio.h>

void removeChar(char *str, char target){
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != target) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main(){
    char str1[] = "programming";
    char str2[] = "hello world";
    
    removeChar(str1, 'm');
    removeChar(str2, 'l');
    
    printf("Test 1 Output: \"%s\"\n", str1);
    printf("Test 2 Output: \"%s\"\n", str2);
    return 0;
}
