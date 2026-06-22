/*
 * This program demonstrates C structures and pointers.
 * It defines a Date structure and a Student structure containing a Date member.
 * The main function collects input for a single student and an array of students.
 * It also defines and uses a function to update a student's GPA via a pointer.
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    int day; 
    int month; 
    int year; 
} Date; 

typedef struct {
    int id; 
    char name[50]; 
    float gpa; 
    Date dob; 
} Student; 

void printStudent(Student s) {
    printf("ID: %d | Name: %s | GPA: %.2f | DOB: %02d/%02d/%04d\n", s.id, s.name, s.gpa, s.dob.day, s.dob.month, s.dob.year); 
}

void updateGPA(Student *s, float newGPA){
    s->gpa = newGPA; 
}

int main(){
    Student s1; 

    printf("Enter Details for Single Student: \n");

    printf("Enter ID: "); 
    scanf("%d", &s1.id); 

    printf("Enter Full Name: "); 
    scanf(" %[^\n]", s1.name); 

    printf("Enter GPA: ");
    scanf("%f", &s1.gpa); 

    printf("Enter Date of Birth (Day Month Year seperated by spaces): "); 
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year); 

    int numStudents = 2; 

    Student classList[2]; 

    printf("Enter Details for %d Students in Array\n", numStudents); 

    for (int i = 0; i < numStudents; i++)
    {
        printf("\nStudent %d\n", i + 1); 

        printf("Enter ID: "); 
        scanf("%d", &classList[i].id); 

        printf("Enter Full Name: "); 
        scanf(" %[^\n]", classList[i].name); 

        printf("Enter GPA: "); 
        scanf("%f", &classList[i].gpa); 

        printf("Enter Date of Birth: "); 
        scanf("%d %d %d", &classList[i].dob.day, &classList[i].dob.month, &classList[i].dob.year); 
    }

    printStudent(s1); 

    for (int i = 0; i < numStudents; i++)
    {
        printStudent(classList[i]); 
    }
    
    updateGPA(&s1, 4.0); 
    printStudent(s1); 
    
    return 0;
}
