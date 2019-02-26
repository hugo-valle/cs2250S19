#include <stdio.h>

// Constants
const int NUM_PLAYERS = 2;
// Function Prototypes
void GetUserNumberAndRating(int nums[], int ratings[]);
void DisplayRoster(int nums[], int ratings[]);
// Main Function
int main()
{
    int jerseyNums[NUM_PLAYERS];
    int ratingNums[NUM_PLAYERS];
    int i = 0;
    int j = 0;
    int playerJersy = 0;
    int playerRating = 0;
    char menuOp = '-';

    // Get user defined jersey numbers and ratings
    GetUserNumberAndRating(jerseyNums, ratingNums);
    // Print roster
    DisplayRoster(jerseyNums, ratingNums);

    // Menu
    do {
        printf("\nMENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n");

        printf("\nChoose an option:\n");
        scanf(" %c", &menuOp);


        //Update
        if (menuOp == 'u') 
        {
            printf("Enter a jersey number:\n");
            scanf("%d", &playerJersy);

            printf("Enter a new rating for player:\n");
            scanf("%d", &playerRating);

            for (i = 0; i < NUM_PLAYERS; ++i) 
            {
                if (jerseyNums[i] == playerJersy) 
                {
                    ratingNums[i] = playerRating;
                }
            }
        }

        // Output players above a user defined rating
        else if (menuOp == 'a') 
        {
            printf("Enter a rating:\n");
            scanf("%d", &playerRating);

            printf("\nABOVE %d\n", playerRating);
            for (i = 0; i < NUM_PLAYERS; ++i) 
            {
                if (ratingNums[i] > playerRating) 
                {
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
                }
            }
        }

        // Replace
        else if (menuOp == 'r') 
        {
            printf("Enter a jersey number:\n");
            scanf("%d", &playerJersy);

            j = -1;  // Default index for player replacement
            for (i = 0; i < NUM_PLAYERS; ++i) 
            {
                if (playerJersy == jerseyNums[i]) 
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

                jerseyNums[j] = playerJersy;
                ratingNums[j] = playerRating;
            }
        }

        // Output roster
        else if (menuOp == 'o') 
        {
            printf("ROSTER\n");
            for (i = 0; i < NUM_PLAYERS; ++i) 
            {
                printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), jerseyNums[i], ratingNums[i]);
            }
        }
    } while(menuOp != 'q');

    return 0;
}
// Function Definitions

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
