/*
 * =====================================================================================
 *
 *       Filename:  main_soccer.c
 *
 *    Description:  Use the soccer library
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:44:05 AM
 *       Revision:  none
 *       Compiler:  gcc main_soccer.c soccer.c -o main_soccer.out
 *          Usage:  ./main_soccer.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "soccer.h"
// Constants

// Function Prototypes

// Main Function
int main()
{
    int jerseyNums[NUM_PLAYERS];
    int ratingNums[NUM_PLAYERS];
    char menuOp = '-';

    // Get user defined jersey numbers and ratings
    GetUserNumberAndRating(jerseyNums, ratingNums);
    // Print roster
    DisplayRoster(jerseyNums, ratingNums);

    // Menu
    do {
        menuOp = DisplayMenu();
        //Update
        if (menuOp == 'u') 
        {
            UpdatePlayerRating(jerseyNums, ratingNums);
        }
        // Output players above a user defined rating
        else if (menuOp == 'a') 
        {
            DisplayRosterAboveRating(jerseyNums, ratingNums);
        }
        // Replace
        else if (menuOp == 'r') 
        {
            ReplacePlayer(jerseyNums, ratingNums);
        }
        // Output roster
        else if (menuOp == 'o') 
        {
            DisplayRoster(jerseyNums, ratingNums);
        }
    } while(menuOp != 'q');

    return 0;
}
// Function Definitions
