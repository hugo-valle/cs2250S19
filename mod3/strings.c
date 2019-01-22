/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

const int SIZE = 50;
// Main Function
int main()
{
    // A string is a list/collection of characters (array)
    // Strings use %s as the placeholder
    char fName[SIZE]; 
    unsigned int long  age;   // For unsigned use the %du, %lu, %llu
    char lName[SIZE]; 
    printf("Please enter you fName (< %d characters, NO space): ", SIZE);
   // When using arrays, DO NOT include the '&' operator in  your scanf
    scanf("%s", fName);

    printf("Enter your age: ");
    scanf("%lu", &age);

    printf("Please enter you lName (< %d characters, NO space): ", SIZE);
    scanf("%s", lName);
    
    printf("Hi [%s][%s] [%lu] years old\n", fName, lName, age);

    return 0;
}
// Function Definitions


