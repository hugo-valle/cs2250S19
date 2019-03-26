/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.h
 *
 *    Description:  Playlist library
 *
 *        Version:  1.0
 *        Created:  03/26/2019 09:36:11 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PLAYLISTNODE__INC__
#define  PLAYLISTNODE__INC__

#define MAX 50
typedef struct PlaylistNode_struct
{
    char uniqueID[MAX];
    char songName[MAX];
    char artistName[MAX];
    int songLength;
    struct PlaylistNode_struct* nextNodePtr;  // address of next member. NULL for last member
}PlaylistNode;

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
        char songNameInit[], char artistNameInit[],
        int songLengthInit, PlaylistNode* nextLoc);

void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);
void SetNextPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode);

PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode);

void PrintlistNode(PlaylistNode* thisNode);

#endif /* ----- #ifndef PLAYLISTNODE__INC__ ----- */

