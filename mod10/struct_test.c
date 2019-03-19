/*
 * =====================================================================================
 *
 *       Filename:  struct_test.c
 *
 *    Description:  Define a structure with pointers
 *
 *        Version:  1.0
 *        Created:  03/19/2019 08:52:46 AM
 *       Revision:  none
 *       Compiler:  gcc struct_test.c -o struct_test.out -lm
 *          Usage:  ./struct_test.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & globals
typedef struct Test
{
    int idNum;          // store an integer
    double* ptPay;      // store an address of a double
} Test;

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Test emp;
    double pay = 456.23;

    emp.idNum = 12345;
    emp.ptPay = &pay;

    printf("Employee number %d was paid $[%6.2lf]\n", emp.idNum, *emp.ptPay);
    return 0;
}
// Function Defenitions


