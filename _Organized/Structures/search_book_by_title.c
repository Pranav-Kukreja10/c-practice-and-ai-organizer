/*
 * This program demonstrates searching for a book in a library using a struct array.
 * The user enters a book title, and the program iterates through the library to find a matching title.
 * If found, it displays the book details; otherwise, it reports that the book is not found.
 */

#include <stdio.h>
#include <string.h>

struct Book
{
    int bookId;
    char title[100]; 
    char author[50];  
};

void searchBookByTitle(struct Book library[], int size, char targetTitle[]) {
    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (strcmp(library[i].title, targetTitle) == 0){
            printf("\nBook Found\n"); 
            printf("ID: %d | Title: %s | Author: %s\n", library[i].bookId, library[i].title, library[i].author); 
            found = 1; 
            break;
        }

        if (found == 0){
            printf("\nBook %s not found in the Library.\n", targetTitle); 
        }
    }
    
}


int main(){
    struct Book library[4] = {
        {101, "1984", "GeorgeOrwell"}, 
        {102, "Dune", "FrankHerbert"}, 
        {103, "Foundation", "IsaacAsimov"}, 
        {104, "Neuromancer", "WilliamGibson"}
    }; 

    char searchTarget[100]; 
    printf("Enter book title: "); scanf("%s", searchTarget); 

    searchBookByTitle(library, 4, searchTarget); 
    return 0;
}
