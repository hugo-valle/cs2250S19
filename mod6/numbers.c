/*
 * =====================================================================================
 *
 *       Filename:  numbers.c
 *
 *    Description:  playing with enumerations
 *
 *        Version:  1.0
 *        Created:  02/14/2019 10:20:48 AM
 *       Revision:  none
 *       Compiler:  gcc numbers.c -o numbers.c.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    enum Operations{ADD, SUB, MUL};
//    enum Operations op;
    int solo = ADD;

    printf("op = %d\n", ADD);
    printf("op = %d\n", SUB);
    printf("op = %d\n", MUL);
    printf("solo = %d\n", solo);

    return 0;
}
// Function Definitions


