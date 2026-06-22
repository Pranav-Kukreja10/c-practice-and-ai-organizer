/*
 * This program searches for a user-provided keyword within a list of widget names.
 * It uses the strstr() function to check if the query string exists as a substring in each widget name.
 * If a match is found, it prints the matching widget; otherwise, it reports no matches.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char *widget[] = {"Weather Tracker", "Task Manager", "Bookmarks", "System Stats"};
    int num_widgets = 4;
    char query[20];

    printf("Enter widget keyowrd to search: "); scanf("%19s", query); 

    int found = 0;
    printf("Search Results: \n"); 
    for (int i = 0; i < num_widgets; i++)
    {
        if (strstr(widget[i], query) !=NULL){
            printf("-Found Match: %s\n", widget[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No widgets match your query.\n");
    }
    
    return 0;
}
