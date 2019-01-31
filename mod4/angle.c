/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Calculate the quadrant based on input angle
 *                  Quadrant I: angle between 0 and 90
 *                  Quadrant II:angle between 90 and 180
 *                  Quadrant III:angle between 180 and 270
 *                  Quadrant IV:angle between 270 and 360
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:35:03 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Main Function
int main()
{
    int angle;
    printf("Please enter an angle: ");
    scanf("%d", &angle);

    // Check for angles > 360
    angle = angle % 360;
        
    if(angle > 0 && angle < 90)         // Quadrant I
    {
        printf("\nThe angle is in quadrant I\n");
    }
    else if(angle > 90 && angle < 180)  // Quadrant II
    {
        printf("\nThe angle is in quadrant II\n");
    }
    else if(angle > 180 && angle < 270)  // Quadrant III
    {
        printf("\nThe angle is in quadrant III\n");
    }
    else if(angle > 270 && angle < 360)  // Quadrant IV
    {
        printf("\nThe angle is in quadrant IV\n");
    }
    else
    {
        printf("\nIncorrect angle\n");
    }


    return 0;
}
