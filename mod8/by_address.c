/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  Learn how to pass information to functions by reference
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:35:32 AM
 *       Revision:  none
 *       Compiler:  gcc by_address.c -o by_address.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void UpdatePosition(double x, double y);

// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3)
    {

        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }
    x = atof(argv[1]);   // convert the first input param to double
    y = atof(argv[2]);   // convert the second input param to double
    DisplayPosition(x, y);



    return 0;
}
// Function Definitions
void DisplayPosition(double x, double y)
{
    printf("Your current position is (%4.2lf,%4.2lf)\n", x, y);
    return;
}



