/*
 * This program checks if a given string is 'perfect' based on character counts.
 * A string is considered perfect if the count of characters 'a' or 'b' is odd,
 * and the count of characters 'x' or 'y' is even. The function iterates through
 * the string, counts occurrences of these specific characters, and returns 1 if
 * the condition is met, otherwise 0.
 */

#include <stdio.h>

int isPerfect(char *str) {
    int ab = 0, xy = 0; 
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'b') ab++; 
        else if (str[i] == 'x' || str[i] == 'y') xy++; 
    }

    if (ab % 2 != 0 && xy % 2 == 0) return 1; 
    return 0;  
    
}

int main(){

    return 0;
}

int main() {
    char test1[] = "axby";
    char test2[] = "abxy";
    char test3[] = "axbyc";
    char test4[] = "";
    
    printf("Test 1 (axby): %d\n", isPerfect(test1));
    printf("Test 2 (abxy): %d\n", isPerfect(test2));
    printf("Test 3 (axbyc): %d\n", isPerfect(test3));
    printf("Test 4 (empty): %d\n", isPerfect(test4));
    
    return 0;
}
