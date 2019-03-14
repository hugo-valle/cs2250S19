/*
 * =====================================================================================
 *
 *       Filename:  use_seats.c
 *
 *    Description:  Test the seats library
 *
 *        Version:  1.0
 *        Created:  03/14/2019 09:23:40 AM
 *       Revision:  none
 *       Compiler:  gcc use_seats.c seats.c -o use_seats.out -lm
 *          Usage:  ./use_seats.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "seats.h"
// Constants and Global
const int NUM_SEATS = 5;

// Main Function
int main(void) 
{
    char userKey = '-';
    int  seatNum = 0;
    Seat allSeats[NUM_SEATS];
    Seat currSeat;
    /* Initialize array */
    SeatsMakeEmpty(allSeats, NUM_SEATS);

    while (userKey != 'q') 
    {
        userKey = SeatsMenu();

        if (userKey == 'p') // Print seats
        {
            SeatsPrint(allSeats, NUM_SEATS);
            printf("\n");
        }
        else if (userKey == 'r') // Reserve seat
        {
            printf("Enter seat num: \n");
            scanf("%d", &seatNum);

            // Check seat number is available
            if (!SeatIsEmpty(allSeats[seatNum]))
            {
                printf("Seat not empty.\n\n");
            }
            else
            {
                printf("Enter first name: \n");
                scanf("%s", currSeat.firstName);
                printf("Enter last name: \n");
                scanf("%s", currSeat.lastName);
                printf("Enter amount paid (full dollars): \n");
                scanf("%d", &currSeat.amountPaid);
                // Set the values of one member of my array to the values of
                // the currSeat
                allSeats[seatNum] = currSeat;

                printf("Completed.\n\n");
            }
        } // end of reservation
        else if (userKey == 'd') // delete reservation seat
        {
            // Display current seating map
            SeatsPrint(allSeats, NUM_SEATS);
            printf("Enter seat num: \n");
            scanf("%d", &seatNum);
            // Check seat number is available
            if (!SeatIsEmpty(allSeats[seatNum]))
            {
                // Delete it
                SeatMakeEmpty(&allSeats[seatNum]);
            }
            else
            {
                printf("Seat is empty.\n\n");
            }
        } // end of delete reservation
        else if (userKey == 'q')
        { // Quit
            printf("Quitting.\n");
        }
        else
        {
            printf("Invalid command.\n\n");
        }
    } // end of while loop

    return 0;
}
