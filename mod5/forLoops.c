/*
 * =====================================================================================
 *
 *       Filename:  forLoops.c
 *
 *    Description:  Play with for loops
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:39:23 AM
 *       Revision:  none
 *       Compiler:  gcc forLoops.c -o forLoops.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAX_NUMBER 5
// Main Function
int main()
{
    int num = 0;
    for(int i = 0; i < MAX_NUMBER; ++i) 
    {
        printf("your i [%d] num++[%d]\n", i, num++);
        printf("num is [%d]\n", num);
        printf("your i [%d] ++num[%d]\n", i, ++num);
    }
    printf("Bub bye\n");

    return 0;
}
// Function Definitions


