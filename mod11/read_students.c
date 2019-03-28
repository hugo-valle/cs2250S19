/*
 * =====================================================================================
 *
 *       Filename:  read_students.c
 *
 *    Description:  Create and later read student records from file.
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:43:48 AM
 *       Revision:  none
 *       Compiler:  gcc read_students.c -o read_students.out -lm
 *          Usage:  ./read_students.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes
void WriteStudentData(FILE *fout, int num);
void ReadStudentData(FILE *fout, int num);

// Main Function
int main(int argc, char* argv[])
{
    int  num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    // Open file to write
    FILE *fptr;
//    FILE* fptr;
//    FILE * fptr;
    if((fptr = fopen("students.txt", "w")) == NULL) // for writting
    {
        printf("Error!. Could not opening file\n");
        exit(1);
    }
    WriteStudentData(fptr, num);
    fclose(fptr);  // close file
    
    // Now open the file for reading
    if((fptr = fopen("students.txt", "r")) == NULL) // for reading
    {
        printf("Error!. Could not opening file\n");
        exit(1);
    }
    ReadStudentData(fptr, num);
    fclose(fptr);  // close file
    
    return 0;
}
// Function Defenitions
void WriteStudentData(FILE *fout, int num)
{
    char name[50];
    int marks;
    // Loop over students
    for(int i = 0; i < num; i++)
    {
        printf("For student %d\nEnter name: ", i+1);
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);
//        fprintf(fout, "\nName: %s \nMarks=%d \n", name, marks);// write to file
        fprintf(fout, "%s %d\n", name, marks);// write to file
    }// end of loop
    return;
}

void ReadStudentData(FILE *fout, int num)
{
    char name[50];
    int marks;
    for(int i = 0; i < num; i++)
    {
        fscanf(fout, "%s %d", name, &marks);
        printf("%d) %s student has %d\n",i+1, name, marks);
    }// end of loop
    return;
}

