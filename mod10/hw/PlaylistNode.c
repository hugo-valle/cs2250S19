/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.c
 *
 *    Description:  Implement the playlist library
 *
 *        Version:  1.0
 *        Created:  03/26/2019 09:47:39 AM
 *       Revision:  none
 *       Compiler:  gcc PlaylistNode.c -o PlaylistNode.out -lm
 *          Usage:  ./PlaylistNode.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "PlaylistNode.h"

// Constants

// Function Defenitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreatePlaylistNode
 *  Description:  Initialize all the value
 * =====================================================================================
 */
void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc)
{
    // 1) Set all your strings in thisNode to the input parameters
    //
    // 2) Set all your integers in thisNode to the input parameters
    //
    // 3) Set the nextNodePtr to nextLoc
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertPlaylistNodeAfter
 *  Description:  Linking your PlaylistNodes
 * =====================================================================================
 */
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
//    PlaylistNode* tempNext = NULL;
    // 1) set temp to thisNode->nextPointer
    // 2) update thisNode->nextPointer to newNode
    // 3) set newNode->nextPointer to tempNext
    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetNextPlayList
 *  Description:  Linking your PlaylistNodes
 * =====================================================================================
 */
void SetNextPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode)
{
    // 1) Set the thisNode->nextNodePtr to newNode
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNextPlaylistNode
 *  Description:  Return the next node in the list
 * =====================================================================================
 */
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode)
{
    // 1) Return the next member in the list
    return thisNode->nextNodePtr;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintlistNode
 *  Description:  Print the list node description
 * =====================================================================================
 */
void PrintlistNode(PlaylistNode* thisNode)
{
    // 1) Print each member of the PlaylistNode
    return;
}
