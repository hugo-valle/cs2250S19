/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate the cartesian coordinates based on:
 *                  radius and theta angle(degress)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:35:51 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double PI = 3.14159;

// Main Function
int main()
{
    double radius, theta, x_pos, y_pos;
    // 1) Capture user input for radius and theta angle(degrees)
    printf("Enter your radius: ");
    scanf("%lf", &radius);
    printf("Enter your theta angle in degrees: ");
    scanf("%lf", &theta);
    // 2) Convert the theta angle to radians
    theta = (theta*PI/180.0);
    // 3) Calculate your cartesian coordinates
    x_pos = radius*cos(theta);
    y_pos = radius*sin(theta);
    // 4) Print the result: format should be 2 decimal places for x and y
    // %.2lf use only 2 decimal places
    // %6.2lf use only 2 decimal places, 6 chars wide
    // %-6.2lf use only 2 decimal places, 6 chars wide, left justify
    // %06.2lf use only 2 decimal places, 6 chars wide, zero patted
    printf("Your Cartesian Coordinates, x = [%06.2lf]\n", x_pos);
    printf("Your Cartesian Coordinates, y = [%06.2lf]\n", y_pos);

    return 0;
}
