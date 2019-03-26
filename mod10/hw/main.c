/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Use of the PlaylistNode
 *
 *        Version:  1.0
 *        Created:  03/26/2019 10:02:40 AM
 *       Revision:  none
 *       Compiler:  gcc main.c PlaylistNode.c -o main.out
 *          Usage:  ./main.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "PlaylistNode.h"

// Constants

// Function Prototypes
void PrintMenu(char playlistTitle[]);

// Main Function
int main(int argc, char* argv[])
{
    char playlistTitle[50];
    // 1) Prompt user for playlist title. Use fgets, and do not forget to 
    // eliminate the end-of-line char
    printf("Enter playlistTitle:\n");
    fgets(playlistTitle, 50, stdin);
    playlistTitle[strlen(playlistTitle) - 1] = '\0';
    // 2) Output playlist menu options
    PrintMenu(playlistTitle);

    return 0;
}
// Function Defenitions

void PrintMenu(char playlistTitle[])
{
    // Create a bunch of temp variables: chars, ints, and PlaylistNode(pointers)
    char menuOp = ' ';
    // Output menu option 
    // Create a loop to print your options
    while(menuOp != 'q')
    {
        printf("%s PLAYLIST MENU\n", playlistTitle);  // TODO: Remove before upload to zybooks
        // Check for valid choices

        // Set corresponding menu action: 
        // switch menuOp
        //
        // case 'a': Add a song
        // case 'r': Output playlist message
        // case 'c': Prompt user for new song location
        // case 's': Output songs by specific artist
        // case 't': Output the total time of songs in sec
        // case 'o': Output full play list
        // case 'q': to quit, which is the exit of your loop
        menuOp = 'q'; // TODO: Remove, this is only for testing
    }// end of loop



    return;
}

