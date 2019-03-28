/*
 * =====================================================================================
 *
 *       Filename:  read_files.c
 *
 *    Description:  Open files for reading purposes
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:48:18 AM
 *       Revision:  none
 *       Compiler:  gcc read_files.c -o read_files.out -lm
 *          Usage:  ./read_files.out 
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

// Main Function
int main(int argc, char* argv[])
{
    FILE *fptr;
    int num;
    // 1) open a file:  ptr = fopen("fileToOpen", "mode")
    // Check if it works
    if((fptr = fopen("program.txt", "r")) == NULL) // for reading
    {
        printf("Error!. Could not open file for reading\n");
        exit(1);
    }
    // Begin Reading from file
    fscanf(fptr, "%d", &num);
    printf("Read %d from input file\n", num);

    // Close file
    fclose(fptr);

    return 0;
}
// Function Defenitions


