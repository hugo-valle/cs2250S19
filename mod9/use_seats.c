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

// Main Function
int main(void) 
{
    const int NUM_SEATS = 5;
    char userKey;
    int  seatNum;
    Seat allSeats[NUM_SEATS];
    Seat currSeat;

    userKey = '-';
    seatNum = 0;

    SeatsMakeEmpty(allSeats, NUM_SEATS);

    while (userKey != 'q') {
        printf("Enter command (p/r/q): \n");
        scanf(" %c", &userKey);

        if (userKey == 'p') { // Print seats
            SeatsPrint(allSeats, NUM_SEATS);
            printf("\n");
        }
        else if (userKey == 'r') { // Reserve seat
            printf("Enter seat num: \n");
            scanf("%d", &seatNum);

            if (!SeatIsEmpty(allSeats[seatNum])) {
                printf("Seat not empty.\n\n");
            }
            else {
                printf("Enter first name: \n");
                scanf("%s", currSeat.firstName);
                printf("Enter last name: \n");
                scanf("%s", currSeat.lastName);
                printf("Enter amount paid: \n");
                scanf("%d", &currSeat.amountPaid);

                allSeats[seatNum] = currSeat;

                printf("Completed.\n\n");
            }
        }
        // FIXME: Add option to delete reservations
        else if (userKey == 'q') { // Quit
            printf("Quitting.\n");
        }
        else {
            printf("Invalid command.\n\n");
        }
    }

    return 0;
}
