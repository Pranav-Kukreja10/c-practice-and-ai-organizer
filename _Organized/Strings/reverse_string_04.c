/*
 * This program attempts to reverse a string using strrev().
 * Note: strrev() is a non-standard function often found in Turbo C.
 * In standard C, strings are null-terminated arrays and must be reversed manually.
 */

#include <string.h>

#include <stdio.h>

int main(){
    char str[] = "Hello"; 
    strrev(str);
    printf("%s", str);
    return 0;
}

int main() {
    char str[] = "Hello";
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
