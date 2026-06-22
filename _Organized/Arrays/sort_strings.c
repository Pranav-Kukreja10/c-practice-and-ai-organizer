/*
 * This program reads n strings from the user and sorts them in ascending order using the Bubble Sort algorithm.
 * It utilizes a 2D character array to store the strings and a pointer array to manage references for efficient swapping.
 * The comparison is performed using strcmp() to determine the lexicographical order of the strings.
 */

#include <stdio.h>
#include <string.h>

int main(){
    int n; scanf("%d", &n); 

    char str[100][100]; 
    char *ptr[n]; 

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]); 
        ptr[i] = str[i]; 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(ptr[i], ptr[j]) > 0) {
                char *temp = ptr[i]; 
                ptr[i] = ptr[j]; 
                ptr[j] = temp; 
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s ", ptr[i]); 
    }

    printf("\n"); 
    
    return 0;
}
