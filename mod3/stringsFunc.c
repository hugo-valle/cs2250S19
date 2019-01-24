/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  Learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:19 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>         // for string manipulation operations


// Main Function
int main()
{    // to autoindent, while seating in one curly type: =%
    char first[50];
    char last[50];
    char fullName[100];
    printf("Enter your first and last name: ");
    scanf("%s %s", first, last);
    printf("Hi [%s] [%s]\n", first, last);
    strcpy(fullName, first);    // fullName = first
    strcat(fullName, " ");      // fullName = fullName + " "
    strcat(fullName, last);      // fullName = fullName + last
    printf("Your Full name is: [%s]\n", fullName);

    return 0;
}
