/*
 * =====================================================================================
 *
 *       Filename:  bmi2.c
 *
 *    Description:  Calculate the BMI with floating points (IEEE-754) single
 *                  and double precission. 
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:28 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2 -lm 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    // BMI = weight/height**2
    double weight = 0;
    double height = 0;
    double bmi = 0;
    // 1) Capture user input: weight (kg) and height (meters)
    printf("Enter your weight in kg: \n");
    scanf("%lf", &weight);
    printf("Enter your height in meters: \n");
    scanf("%lf", &height);
    // 2) Calculate BMI
    bmi = weight/pow(height, 2);
    // 3) Display BMI
    printf("With %lf kg and %lf meters, your BMI is %lf\n", weight, height, bmi);
    printf("Done\n");
    return 0;
}
// Function Definitions


