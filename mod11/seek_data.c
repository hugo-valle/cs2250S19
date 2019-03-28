/*
 * =====================================================================================
 *
 *       Filename:  seek_data.c
 *
 *    Description:  Access records at specific locations
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:16:44 AM
 *       Revision:  none
 *       Compiler:  gcc seek_data.c -o seek_data.out -lm
 *          Usage:  ./seek_data.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
typedef struct threeNum
{
    int n1;
    int n2;
    int n3;
}ThreeNumbers;

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    FILE *fptr;
    ThreeNumbers nums;   // declare a structure variable
    // 1) open a file:  ptr = fopen("fileToOpen", "mode")
    // Check if it works
    if((fptr = fopen("program.bin", "rb")) == NULL) // for rb: read binary
    {
        printf("Error!. Could not opening file\n");
        exit(1);
    }
    // fseek(FILE* stream, long int offset, int whence)
    // Different whences in fseek()
    // SEEK_SET : starts the offset from the beg of file
    // SEEK_END : starts the offset from the of end of the file
    // SEEK_CUR : starts the offset from the current location 
    // Move the cursor to the end of the file. 
    //   to read data backwards at the record level NOT the EOF byte.
    fseek(fptr, -sizeof(ThreeNumbers), SEEK_END);
    // Loop over data
    for(int n = 1; n < 5; n++)
    {
        fread(&nums, sizeof(ThreeNumbers), 1, fptr); // one record
        // We should have the data loaded into the structure
        printf("n1:%d\t n2:%d\t n3:%d\n", nums.n1, nums.n2, nums.n3);
        // seek the new position
        fseek(fptr, -2*sizeof(ThreeNumbers), SEEK_CUR);
    }

    // Close file
    fclose(fptr);
    return 0;
}
// Function Defenitions


