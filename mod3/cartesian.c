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
    // 4) Print the result
    printf("Your Cartesian Coordinates, x = [%lf], y = [%lf]\n",
            x_pos, y_pos);

    return 0;
}
