/*
 * =====================================================================================
 *
 *       Filename:  date_struct.c
 *
 *    Description:  Practice structure usage
 *
 *        Version:  1.0
 *        Created:  03/12/2019 08:40:28 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct.c -o date_struct.out -lm
 *          Usage:  ./date_struct.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

struct Birth
{
    int month;
    int day;
    int year;
};
// Main Function
int main(int argc, char* argv[])
{
    // Variable type is: struct Birth
    struct Birth waldo;
    waldo.month = 12;   // access struct members with a dot
    waldo.day = 24;   // access struct members with a dot
    waldo.year = 2018;   // access struct members with a dot
    printf("Waldo's month is = %d\n", waldo.month);
    printf("Waldo's day is = %d\n", waldo.day);
    printf("Waldo's year is = %d\n", waldo.year % 100);
    // Define and initialize a structure
    struct Birth weber = {11, 5, 2017};
    printf("Weber month %d day %d and year %d\n", weber.month, weber.day, 
            weber.year % 100);


    return 0;
}
// Function Defenitions


