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
    printf("Welcome to my [%s] list\n", playlistTitle);
    return;
}

