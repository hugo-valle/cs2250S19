/*
 * =====================================================================================
 *
 *       Filename:  seats.h
 *
 *    Description:  Seats library
 *
 *        Version:  1.0
 *        Created:  03/14/2019 09:08:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEATS__INC__
#define  SEATS__INC__

#include <string.h>
#include <stdbool.h>

typedef struct Seat_struct 
{
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

void SeatMakeEmpty(Seat* seat);   // pass by reference
bool SeatIsEmpty(Seat seat);      // pass by value
void SeatPrint(Seat seat);
void SeatsMakeEmpty(Seat seats[], int numSeats);
void SeatsPrint(Seat seats[], int numSeats);


#endif /* ----- #ifndef SEATS__INC__ ----- */

