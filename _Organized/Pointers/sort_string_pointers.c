/*
 * This program demonstrates sorting an array of character pointers.
 * It uses an array of strings and creates an array of pointers to these strings.
 * The sort_string_pointers function implements a bubble sort algorithm to arrange
 * the strings in alphabetical order by comparing the strings pointed to by the pointers.
 * The main function initializes the data, calls the sorting function, and prints the result.
 */

#include <stdio.h>
#include <string.h>

void sort_string_pointers(char *ptr[], int size) {
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(ptr[j], ptr[j + 1]) > 0) {
                char *temp = ptr[j]; 
                ptr[j] = ptr[j + 1]; 
                ptr[j + 1] = temp; 
            }
        }
        
    }
    
}

int main(){
    char words[4][20] = {"zebra", "apple", "monkey", "banana"};
    
    // Array of character pointers
    char *ptr_arr[4];
    
    // Point each pointer to the start of each word
    for (int i = 0; i < 4; i++) {
        ptr_arr[i] = words[i]; 
    }

    sort_string_pointers(ptr_arr, 4);

    printf("Sorted via pointers: ");
    for (int i = 0; i < 4; i++) {
        printf("%s ", ptr_arr[i]);
    }
    printf("\n");
    return 0;
}
