#include <stdio.h>

// Constants
const int NUM_PLAYERS = 2;
// Function Prototypes
void GetUserNumberAndRating(int nums[], int ratings[]);
void DisplayRoster(int nums[], int ratings[]);
void UpdatePlayerRating(int nums[], int ratings[]);
void DisplayRosterAboveRating(int nums[], int ratings[]);
void ReplacePlayer(int nums[], int ratings[]);
char DisplayMenu();

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
