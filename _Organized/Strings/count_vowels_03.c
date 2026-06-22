/*
 * This program concatenates two strings and counts the number of vowels in the resulting string.
 * It uses a pointer to traverse the concatenated string character by character, checking for both lowercase and uppercase vowels.
 * Finally, it prints the total count of vowels found.
 */

#include <stdio.h>
#include <string.h>


int main(){
    char str_1[50] = "College";
    char str_2[] = "Exam";
    int vowel_count = 0;

    strcat(str_1, str_2); 

    printf("%s\n", str_1);

    char *ptr = str_1; 

    while (*ptr != '\0'){
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            vowel_count++;
        }

        ptr++;
    }

    printf("%d\n", vowel_count);


    return 0;
}
