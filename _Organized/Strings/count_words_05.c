/*
 * This program counts the number of words in a given string.
 * It iterates through each character and increments the counter when a non-whitespace character is encountered after a whitespace or at the start.
 * The counter is reset whenever a space, newline, or tab is found.
 */

#include <stdio.h>

int main()
{
    char str[100] = "Hello World This is C";

    int in_flag = 0;
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            if (in_flag == 0)
            {
                count++;
                in_flag = 1;
            }
        }
        else{
            in_flag = 0; 
        }

    }
    printf("%d", count);

    return 0;
}
