/*
 * This program searches for a specific subject name in a predefined array of strings.
 * It uses strcmp() to compare the user input against each subject in the array.
 * The program reports the index of the found subject or indicates if it is not present.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char *subjects[] = {"Physics", "Chemistry", "Mathematics", "English", "Computers"};

    int num_subjects = 5; 

    char input[20]; 

    int found = 0; 

    printf("Enter subject to search: "); 
    scanf("%19s", input); 

    for (int i = 0; i < num_subjects; i++)
    {
        if (strcmp(subjects[i], input) == 0) {
        
        printf("Subject found at index %d!\n", i); 
        found = 1;
        break;
        }
    }

    if (found == 0){
        printf("Subject not found. \n");
    }
    
    return 0;
}
