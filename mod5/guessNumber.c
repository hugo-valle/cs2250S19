/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  Guess the random number
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:52:57 AM
 *       Revision:  none
 *       Compiler:  gcc guessNumber.c -o guessNumber.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>     // rand(), srand()
#include <time.h>       // time()
// Constants
#define MAX 5
#define LIMIT 100
// Main Function
int main()
{
    int number, guess;
    srand(time(0));              // set the random SEED
    guess = rand() % LIMIT;         // set random number between 0-9
    // int i; // before C89 you need to define i outside loop 
    for(int i = 0; i < MAX; i++)
    {
        printf("Please guess a number between 0 and %d\n", LIMIT - 1);
        printf("You have %d opportunities left\n", MAX - i);
        scanf("%d", &number);

        if(number > guess)
        {
            printf("Go lower\n");
        }
        else if(number < guess)
        {
            printf("Go higher\n");
        }
        else
        {
            printf("Congratulations, you got the correct number\n");
            return 0;
        }
    } // end of for loop
    printf("Sorry, you did not guess the [%d] number\nPlay again\n", guess);


    return 0;
}
