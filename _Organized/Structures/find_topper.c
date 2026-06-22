/*
 * This program manages student records using a struct.
 * It collects details (name, roll number, marks for 3 subjects) for 3 students.
 * It calculates the total marks for each student and identifies the topper.
 */

#include <stdio.h>

struct Student{
    char name[50]; 
    int rollNumber; 
    float marks[3]; 
    float total; 
}; 

int main(){
    struct Student class_record[3]; 
    int highestIndex = 0; 

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1); 
        printf("Name: "); 
        scanf("%s", class_record[i].name); 
        printf("Roll Number: "); 
        scanf("%d", &class_record[i].rollNumber);

        class_record[i].total = 0; 

        printf("Enter marks for 3 subjects: "); 
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &class_record[i].marks[j]); 
            class_record[i].total += class_record[i].marks[j]; 
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        if (class_record[i].total > class_record[highestIndex].total){
            highestIndex = i; 
        }
    }

    printf("Topper: %s\n", class_record[highestIndex].name); 
    printf("Highest Total Marks: %.2f\n", class_record[highestIndex].total); 
    
    
    return 0;
}
