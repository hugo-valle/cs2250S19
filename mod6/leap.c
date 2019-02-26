/*
 * =====================================================================================
 *
 *       Filename:  leap.c
 *
 *    Description:  Use leap year
 *
 *        Version:  1.0
 *        Created:  02/18/2019 07:44:40 PM
 *       Revision:  none
 *       Compiler:  gcc leap.c -o leap.c.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
int IsLeapYear(int year);

// Main Function
int main(int argc, char* argv[])
{
    printf("Finding the leap years between 2000 to 2019\n");
    for(int year = 2000; year < 2019; year++)
    {
        if(IsLeapYear(year))
        {
            printf("%d is a leap year\n", year);
        }
    } // end of year loop

    return 0;
}
// Function Definitions

/*
Purpose: Determine if a given year is a leap year
Parameters:
int year The year to test
Return value:
int 1 if the year is a leap year, 0 otherwise
*/
int IsLeapYear(int year)
{
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
    {
        return 1; // It is a leap year
    } 
    else 
    {
        return 0; // not a leap year
    }
}
