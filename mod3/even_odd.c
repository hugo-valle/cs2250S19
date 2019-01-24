/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determine if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:31 AM
 *       Revision:  none
 *       Compiler:  gcc even_odd.c -o even_odd.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main()
{
    int num; 
    printf("Enter an integer: ");
    scanf("%d", &num);
    // test value for even or odd
    if(num % 2 == 0)
    {
        printf("%d is even\n", num);
    }
    printf("Adios amigo\n");

    return 0;
}
// Function Definitions


