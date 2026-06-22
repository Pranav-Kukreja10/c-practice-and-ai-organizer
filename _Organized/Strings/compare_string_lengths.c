/*
 * This program compares the lengths of two strings.
 * It uses strlen() to determine the length of each string.
 * The longer string is then printed to the console.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Apple"; 
    char str2[] = "Banana";
    
    printf("Length of str1: %d and Length of str2: %d\n", strlen(str1), strlen(str2));

    if (strlen(str1) > strlen(str2)){
        printf("%s is longer", str1);
    }
    else{
        printf("%s is longer", str2);
    }
    return 0;
}
