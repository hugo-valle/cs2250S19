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
    Student *headRec = NULL;
    Student *nextRec = NULL;
    Student *currentRec = NULL;
    // Main Loop
    while(ans == 'y')
    {
        // Allocate the memory for the new record
        nextRec = (Student*) malloc(sizeof(Student));
        // save the address of the first record
        if(currentRec == NULL)
        {
            headRec = nextRec;
        }
        else
        {
            // Only link records after one iteration
            LinkStudent(currentRec, nextRec);
        }
        // Capture user input
        printf("Student %d\n", id + 1);
        id = id + 1;
        printf("Enter your name:\n");
        fgets(name, MAX, stdin);
        name[strlen(name) - 1] = '\0';  // Eliminate EOL character
        // Save it to a Student struct
        AddStudent(nextRec, name, id, NULL);
        // Do you want another record [y|n]
        printf("Do you want another record [y|n]:");
        scanf("%c%c", &ans, &dummy);
        fflush(stdin);
        // Save the current record before you request another 
        currentRec = nextRec;
    }
    // Display ALL student records    
    currentRec = headRec;
    while(currentRec != NULL)
    {
        // Display one record;
        DisplayStudent(currentRec);
        // Get the next record
        currentRec = currentRec->next;
    }

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
    thisStudent->next = newStudent;     // Connect this to next record
    return;
}
