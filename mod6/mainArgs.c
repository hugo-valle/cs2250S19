/*
 * =====================================================================================
 *
 *       Filename:  mainArgs.c
 *
 *    Description:  Pass arguments/parameters to main function
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:17:38 AM
 *       Revision:  none
 *       Compiler:  gcc mainArgs.c -o mainArgs.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main(int argc, char* argv[])
{
    printf("Argument count is: %d\n", argc);
    printf("Program Name [%s]\n", argv[0]); // argv[0] the program name

    for (int i = 0; i < argc; i += 1)
    {
        printf("Argv %d [%s]\n", i, argv[i]);
    }

    return 0;
}
// Function Definitions


