/*
 * =====================================================================================
 *
 *       Filename:  soccer.c
 *
 *    Description:  Implementation file of the soccer library
 *                  This file does NOT have a main() function
 *                  No prototypes
 *                  Maybe some local constants
 *                  Include your header file "soccer.h"
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:44:05 AM
 *       Revision:  none
 *       Compiler:  
 *          Usage:   
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "soccer.h"         // header file

// Function Defenitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetUserNumberAndRating
 *  Description:  Collect Players Numbers and Ratings
 *  Param: nums: Array of int numbers
 *  Param: ratings: Array of int ratings
 *  Note: We will link both arrays by index notation
 * =====================================================================================
 */
void GetUserNumberAndRating(int nums[], int ratings[])
{
    for(int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Enter player %d's jersey number:\n", (i + 1));
        scanf("%d", &(nums[i]));

        printf("Enter player %d's rating:\n", (i + 1));
        scanf("%d", &(ratings[i]));
        printf("\n");
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayRoster
 *  Description:  Display current roster information
 *  Param: nums: Array of int numbers
 *  Param: ratings: Array of int ratings
 * =====================================================================================
 */
void DisplayRoster(int nums[], int ratings[])
{
    printf("ROSTER\n");
    for(int i = 0; i < NUM_PLAYERS; ++i) 
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", 
                (i + 1), nums[i], ratings[i]);
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayMenu
 *  Description:  Display Program choices
 *  Return: character with choice
 * =====================================================================================
 */
char DisplayMenu()
{
    char input;
    printf("\nMENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");

    printf("\nChoose an option:\n");
    scanf(" %c", &input);

    return input;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePlayerRating
 *  Description:  Update player information
 *  Param: nums: Array of int numbers
 *  Param: ratings: Array of int ratings
 * =====================================================================================
 */
void UpdatePlayerRating(int nums[], int ratings[])
{
    int playerJersy, playerRating;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);

    printf("Enter a new rating for player:\n");
    scanf("%d", &playerRating);

    for (int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (nums[i] == playerJersy) 
        {
            ratings[i] = playerRating;
        }
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayRosterAboveRating
 *  Description:  Display Roster above Rating
 *  Param: nums: Array of int numbers
 *  Param: ratings: Array of int ratings
 * =====================================================================================
 */
void DisplayRosterAboveRating(int nums[], int ratings[])
{
    int playerRating;
    printf("Enter a rating:\n");
    scanf("%d", &playerRating);

    printf("\nABOVE %d\n", playerRating);
    for(int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (ratings[i] > playerRating) 
        {
            printf("Player %d -- Jersey number: %d, Rating: %d\n", 
                    (i + 1), nums[i], ratings[i]);
        }
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ReplacePlayerRating
 *  Description:  Replace player information
 *  Param: nums: Array of int numbers
 *  Param: ratings: Array of int ratings
 * =====================================================================================
 */
void ReplacePlayer(int nums[], int ratings[])
{
    int playerJersy, playerRating;
    printf("Enter a jersey number:\n");
    scanf("%d", &playerJersy);

    int j = -1;  // Default index for player replacement
    for(int i = 0; i < NUM_PLAYERS; ++i) 
    {
        if (playerJersy == nums[i]) 
        {
            j = i;
        }
    }

    // Replace player only if the player is in the roster
    if (j != -1) 
    {
        printf("Enter a new jersey number:\n");
        scanf("%d", &playerJersy);

        printf("Enter a rating for the new player:\n");
        scanf("%d", &playerRating);

        nums[j] = playerJersy;
        ratings[j] = playerRating;
    }
    return;
}

