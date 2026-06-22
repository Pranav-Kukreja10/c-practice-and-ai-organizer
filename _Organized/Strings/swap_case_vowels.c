/*
 * This program reads a string from standard input and swaps the case of all vowels.
 * Lowercase vowels (a, e, i, o, u) are converted to uppercase, while uppercase vowels
 * (A, E, I, O, U) are converted to lowercase. Consonants remain unchanged.
 * The algorithm iterates through each character of the string and applies the appropriate transformation.
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            str[i] = toupper(c);
        } else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            str[i] = tolower(c);
        }
    }

    printf("%s\n", str);
    return 0;
}
