/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  Temperature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:38:59 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>       // time()
#include <stdlib.h>     // rand(), srand()
// Constants
#define NUM 4
#define MIN 20      // min temp
#define MAX 45      // max temp
// Main Function
int main()
{
    double max_ogden[NUM]; 
    double min_ogden[NUM]; 
    double avg = 0, min_temp = 0, max_temp = 0;
    int min_day = 1, max_day = 1;
    srand(time(0));         // set random seed

    printf("Simulating the max and min Ogden temp for the next %d days\n", NUM);
    // TASK: Capture max and min temps from user
    for(int i = 0; i < NUM; i++)
    {
        min_ogden[i] = ((rand() % MIN) + (rand() % MAX))/2;
        max_ogden[i] = min_ogden[i] + (rand() % (MAX - MIN));
    }
    // TASK: Display information
    for(int i = 0; i < NUM; i++)
    {
        printf("%2d) max[%6.2lf] min[%6.2lf] temps in Ogden\n", 
                i+1,  max_ogden[i], min_ogden[i]);
    }
    // TASK: Calculate the average and min and max of the date range
    // Initialize your min_temp and max_temp
    min_temp = min_ogden[0];
    max_temp = max_ogden[0];
    for(int i = 0; i < NUM; i++)
    {
        avg += min_ogden[i];    // adding elements
        avg += max_ogden[i];
        if(min_temp > min_ogden[i])   // select minimum value
        {
            min_temp = min_ogden[i];
            min_day = i + 1;
        }
        if(max_temp < max_ogden[i])  // select maximum value
        {
            max_temp = max_ogden[i];
            max_day = i + 1;
        }
    }
    avg = avg/(NUM * 2);        // calculate avg
    printf("Your avg temp = [%6.2lf]\n", avg);
    printf("Your min [%6.2lf] on day [%02d]\n", min_temp, min_day);
    printf("Your max [%6.2lf] on day [%02d]\n", max_temp, max_day);

    return 0;
}
// Function Definitions


