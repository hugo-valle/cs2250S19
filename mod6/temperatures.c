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
#define NUM 40
#define MIN 20      // min temp
#define MAX 45      // max temp
// Main Function
int main()
{
    double max_ogden[NUM]; 
    double min_ogden[NUM]; 
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
//    for(int i = 0; i < NUM; i++)
//    {
//    }

    return 0;
}
// Function Definitions


