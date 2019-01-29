/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  Program to calculate temperature
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:42 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature
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
    double in_temp, out_temp;
    int choice;
    // 1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Plese enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit: ");
    scanf("%d", &choice);
    // 2) Based on choice calculate Ceisius or Fahrenheit
    if(choice == 0)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
        // Convert from Celsius to Fahrenheit
        out_temp = (in_temp * 9.0/5.0) + 32;
        printf("Your temperature in Fahrenheit is: %.2lf\n", out_temp);
    }
    else if (choice == 1)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        // Convert from Fahrenheit to Celsius
        out_temp = (in_temp - 32) * 5.0/9.0;
        printf("Your temperature in Celsius is: %.2lf\n", out_temp);
    }
    else
    {
        printf("Sorry, you did not entered 0 or 1\nAdios amigo\n");
        return 0;
    }
    return 0;
}
// Function Definitions


