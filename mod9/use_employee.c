/*
 * =====================================================================================
 *
 *       Filename:  use_employee.c
 *
 *    Description:  Use the Employee Library
 *
 *        Version:  1.0
 *        Created:  03/12/2019 10:13:23 AM
 *       Revision:  none
 *       Compiler:  gcc use_employee.c employee.c -o use_employee.out -lm
 *          Usage:  ./use_employee.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

#define TOTAL 5
// Main Function
int main(int argc, char* argv[])
{
    Employee students[TOTAL];
    for(int i = 0; i < TOTAL; i++)
    {
        // Notes: An array name "students" is the same as the address of the 
        // first member. If you need to pass one member, use the address and 
        // member index number: &students[i]
        CreateEmployee(&students[i], i + 1);
        CalcPay(&students[i]);
        DisplayEmp(&students[i]);
    }

    return 0;
}
