/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  Calculate altitude of Satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:25 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 6.67e-11;    //Newton's constant (m^3 kg^-1 s^-2)
const double E_MASS = 5.97e24;      // Earth's Mass (kg)
const double E_RADIUS = 6371e3;     // Earth's Radius (meters)
const double PI = 3.1415941;        // PI
// Main Function
int main()
{
    double period = 0;
    double height = 0;
    // 1) Enter the period (time) in seconds
    printf("Enter the period (T) in seconds: ");
    scanf("%lf", &period);
    // Calculate Height = [(G M T^2)/(4PI^2)]^1/3 - R
    height = GRAVITY * E_MASS * pow(period, 2); // get the numerator
    height = height/(4*pow(PI,2)); // denominator
    height = pow(height,1/3);
    height = height - E_RADIUS; 
    // Display result: ex: 86400 seconds -> 35855 meters
    printf("Your satellite after %lf sec is %lf meters from earth\n",
            period, height);

    return 0;
}
// Function Definitions


