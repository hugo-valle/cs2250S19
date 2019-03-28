/*
 * =====================================================================================
 *
 *       Filename:  open_files.c
 *
 *    Description:  Opening a file for creation and edit
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:33:46 AM
 *       Revision:  none
 *       Compiler:  gcc open_files.c -o open_files.out -lm
 *          Usage:  ./open_files.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>   // for FILE pointer

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    FILE *fptr;
    int num;
    // 1) open a file:  ptr = fopen("fileToOpen", "mode")
    fptr = fopen("program.txt", "w");
    // Check if it works
    if(fptr == NULL)
    {
        printf("Error!. Could not open file for writting\n");
        exit(1);
    }
    // 2) read/write from/to the  file
    printf("Enter a number: ");
    scanf("%d", &num);
    // Write to file: fprintf()
    fprintf(fptr, "%d\n", num);
    // 3) close the file: fclose(ptr)
    fclose(fptr);

    return 0;
}
// Function Defenitions


