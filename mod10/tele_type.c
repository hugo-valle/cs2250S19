/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    Description:  First look into LinkedList
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:03:15 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.out -lm
 *          Usage:  ./tele_type.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
#define MAXNAME 30
#define MAXPHONE 15

struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType* nextaddr;   // "should" be the last member
};
typedef struct TeleType Tele;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Acme, John", "(801) 891-2344"};
    Tele t2 = {"Martinez, Tino", "(801) 567-2344"};
    Tele t3 = {"Weber, Waldo", "(801) 638-0011"};
    Tele* first;  // pointer(address) to structure

    first = &t1;  // get the address of a Tele structure
    t1.nextaddr = &t2;  // set the address of the next structure
    t2.nextaddr = &t3;  // set the address of the next structure
    t3.nextaddr = NULL;  // set the address of NULL, last member

//    printf("%s\n%s\n", (*first).name, (*first).phoneNum);
    printf("%s\n %s\n %s\n", first->name, t1.nextaddr->name, t2.nextaddr->name);
    return 0;
}
// Function Defenitions


