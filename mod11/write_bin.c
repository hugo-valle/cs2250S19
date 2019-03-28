/*
 * =====================================================================================
 *
 *       Filename:  write_bin.c
 *
 *    Description:  Write to a file in binary mode
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:53:59 AM
 *       Revision:  none
 *       Compiler:  gcc write_bin.c -o write_bin.out -lm
 *          Usage:  ./write_bin.out 
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
    if((fptr = fopen("program.bin", "wb")) == NULL) // for wb: write binary
    {
        printf("Error!. Could not opening file\n");
        exit(1);
    }
    // Write to file 
    for(int n = 1; n < 5; n++)
    {
        nums.n1 = n;
        nums.n2 = 5*n;
        nums.n3 = 5*n + 1;
        // To write binary data use: 
        // fwrite(address_data, size_data, numbers_data, pointer_to_file)
        fwrite(&nums, sizeof(ThreeNumbers), 1, fptr);
    } // end of loop
    
    // Close file
    fclose(fptr);

    return 0;
}
// Function Defenitions


