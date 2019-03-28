/*
 * =====================================================================================
 *
 *       Filename:  read_bin.c
 *
 *    Description:  Read FROM a binary file
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:05:29 AM
 *       Revision:  none
 *       Compiler:  gcc read_bin.c -o read_bin.out -lm
 *          Usage:  ./read_bin.out 
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
    // Reading file 
    for(int n = 1; n < 5; n++)
    {
        // To read binary data use: 
        // fread(address_data, size_data, numbers_data, pointer_to_file)
        fread(&nums, sizeof(ThreeNumbers), 1, fptr);
        // We should have the data loaded into the structure
        printf("n1:%d\t n2:%d\t n3:%d\n", nums.n1, nums.n2, nums.n3);
    } // end of loop
    
    // Close file
    fclose(fptr);

    return 0;
}
// Function Defenitions


