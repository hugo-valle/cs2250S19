/*
 * =====================================================================================
 *
 *       Filename:  students.c
 *
 *    Description:  Create a dynamically allocate structure
 *
 *        Version:  1.0
 *        Created:  03/21/2019 08:44:42 AM
 *       Revision:  none
 *       Compiler:  gcc students.c -o students.out -lm
 *          Usage:  ./students.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define MAX 50
typedef struct Student
{
    char fName[50];
    int idNum;
    struct Student* next;
} Student;

// Function Prototypes
void AddStudent(Student* thisStudent, char name[], int id, Student* newStudent);
void LinkStudent(Student* thisStudent, Student* newStudent);
void DisplayStudent(const Student* st);

// Main Function
int main(int argc, char* argv[])
{
    int id = 0;
    char name[MAX] = "";
    char ans = 'y';
    char dummy;
//    Student st;
    Student *headRec = NULL;
//    Student *nextRec = NULL;
//    Student *currentRec = NULL;
    
    while(ans == 'y')
    {
        // Allocate the memory for the new record
        headRec = (Student*) malloc(sizeof(Student));

        printf("Student %d\n", id + 1);
        id = id + 1;
        printf("Enter your name:\n");
        fgets(name, MAX, stdin);
        name[strlen(name) - 1] = '\0';  // Eliminate EOL character
        // Save it to a Student struct
        AddStudent(headRec, name, id, NULL);
        // Do you want another record [y|n]
        printf("Do you want another record [y|n]:");
        scanf("%c%c", &ans, &dummy);
        fflush(stdin);
    }
    // Display ALL student records    
    DisplayStudent(headRec);

    return 0;
}
// Function Defenitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddStudent
 *  Description:  Populate a Student structure
 * =====================================================================================
 */
void AddStudent(Student* thisStudent, char name[], int id, Student* newStudent)
{
    strcpy(thisStudent->fName,name);
    thisStudent->idNum = id;
    thisStudent->next = newStudent; // set the address of the next member
    
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayStudent
 *  Description:  Display a Student Record
 * =====================================================================================
 */
void DisplayStudent(const Student* st)
{
    printf("Hi [%s] student with id[%d]\n",
            st->fName, st->idNum);
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  LinkStudent
 *  Description:  Connect One node/structure to another
 * =====================================================================================
 */
void LinkStudent(Student* thisStudent, Student* newStudent)
{
    // Connect the records
    Student* tmp = NULL;                // dummy
    tmp = thisStudent->next;            // currently should be NULL
    thisStudent->next = newStudent;     // Connect this to next record
    newStudent->next =  tmp;            // This is end of the list
    return;
}
