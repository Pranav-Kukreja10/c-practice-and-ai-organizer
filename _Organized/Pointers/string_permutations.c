/*
 * This program generates all permutations of a given string using backtracking.
 * It uses a recursive approach where characters are swapped to fix positions
 * and then the function recurses to the next position.
 * The swap function exchanges characters at two pointer locations.
 */

#include <stdio.h>
#include <string.h>

void swap(char *x, char*y) {
    char temp = *x; 
    *x = *y; 
    *y = temp; 
}

void permute(char *str, int left, int right) {
    if (left == right){
        printf("%s\n", str); 
    }
    else{
        for (int i = left; i <= right; i++)
        {
            swap((str + left), (str + right)); 

            permute(str, left + 1, right); 

            swap((str + left), (str + i)); 
        }
        
    }
}
 
int main(){
    char str[] = "ABC";
    int n = strlen(str);
    
    printf("Permutations of %s:\n", str);
    permute(str, 0, n - 1);
    return 0;
}
