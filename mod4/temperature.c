/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Play with float points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:42 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
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
    float temp = 7.9;   // Celsius
    double f_temp = 0;
    // For floats use the %f placeholder
    // for doubles use the %lf placeholder
    printf("The temperature is %f Celsius\n", temp);
    // Now take user input
    printf("What is the temperature in Ogden now in Celsius: ");
    // use %f to capture float information
    // use %lf to capture double information
    scanf("%f", &temp);
    // COnvert from Celsius to Fahrenheit
    f_temp = (temp * 9/5) + 32;
    printf("I see, your temp is %lf in Fahrenheit.\n",f_temp);

    return 0;
}
// Function Definitions


