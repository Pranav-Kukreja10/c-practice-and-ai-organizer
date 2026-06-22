/*
 * This program demonstrates a recursive approach to reverse a string in-place.
 * The function reverseString() takes a pointer to the first character of a null-terminated string.
 * It swaps the first and last characters, then recursively processes the substring starting from the second character.
 * The base case is when the string length is 1 or less, at which point the recursion stops.
 */

#include <stdio.h>

int main()
{
    int a = 10;
    int *p = malloc(sizeof(int));
    return 0;
}

#include <stdio.h>
#include <string.h>

// Function takes ONLY the string pointer
void reverseString(char *str)
{
    int len = strlen(str);

    if (len <= 1)
    {
        return;
    }
    char lastChar = str[len - 1];

    str[len - 1] = '\0';

    char firstChar = str[0];
    str[0] = lastChar;

    reverseString(str + 1);

    str[len - 1] = firstChar;
}

int main()
{
    char myString[] = "HELLO";

    printf("Original String: %s\n", myString);

    // We only pass the string itself
    reverseString(myString);

    printf("Reversed String: %s\n", myString);

    return 0;
}
