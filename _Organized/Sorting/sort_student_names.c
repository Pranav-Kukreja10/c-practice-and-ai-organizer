/*
 * This program reads four student names from the user and sorts them alphabetically in ascending order.
 * It uses a bubble sort algorithm to compare adjacent strings using strcmp() and swaps them if they are out of order.
 * The sorted names are then printed to the console.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char student_data[4][50];

    char *names[4];

    printf("Enter Student names: \n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%s", student_data[i]);

        names[i] = student_data[i];
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3-i; j++)
        {
            if (strcmp(names[j], names[j+1]) > 0){
                char *temp = names[j];
                names[j] = names[j+1]; 
                names[j+1] = temp; 
            }
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", names[i]);
    }
    
    
    return 0;
}
