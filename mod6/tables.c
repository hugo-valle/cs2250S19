/*
 * =====================================================================================
 *
 *       Filename:  tables.c
 *
 *    Description:  Diplay multiplication tables
 *
 *        Version:  1.0
 *        Created:  02/12/2019 09:49:11 AM
 *       Revision:  none
 *       Compiler:  gcc tables.c -o tables.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define TABLES 12
// Main Function
int main()
{
    for(int i = 1; i <= TABLES; i++)
    {
        for(int j = 1; j <= TABLES; j++)
        {
            printf("%3d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
