/*
 * This program demonstrates sorting an array of C strings using the Bubble Sort algorithm.
 * It compares adjacent strings using strcmp() and swaps them if they are in the wrong order.
 * The main function displays the array before and after sorting to verify the result.
 */

#include <stdio.h>
#include <string.h>

void sortStrings(char **arr, int size){
    char *temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(*(arr + j), *(arr + j + 1)) > 0) {
                temp = * (arr + j); 
                *(arr + j) = *(arr + j + 1); 
                *(arr + j + 1) = temp;
            }
        }
        
    }
    
}

int main(){
    char *words[] = {"zebra", "apple", "mango", "banana"};
    int size = sizeof(words) / sizeof(words[0]);
    
    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", words[i]);
    }
    printf("\n\n");
    
    sortStrings(words, size);
    
    printf("After sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
    
    return 0;
    return 0;
}
