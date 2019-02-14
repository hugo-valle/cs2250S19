/*
 * =====================================================================================
 *
 *       Filename:  simpleCalculator.c
 *          Usage:  ./simpleCalculator.out <PARAM1> <PARAM2>
 *
 *    Description:  Calculate the sum, difference, product of two input parameters
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:28:26 AM
 *       Revision:  none
 *       Compiler:  gcc simpleCalculator.c -o simpleCalculator.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
// Constants

// Main Function
int main(int argc, char* argv[])
{
    // Validate argument count, 
    // return 1 otherwise
    if(argc != 3)
    {
        printf("Missing input parameters\n");
        printf("Usage: %s <NUM1> <NUM2>\n", argv[0]);
        return 1;
    }

    printf("Adios amigo\n");
    return 0;
}
// Function Definitions


