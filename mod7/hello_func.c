/*
 * =====================================================================================
 *
 *       Filename:  hello_func.c
 *
 *    Description:  Practice functions
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:48:26 AM
 *       Revision:  none
 *       Compiler:  gcc hello_func.c -o hello_func.out
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello_World();
void Hello_Number(int num);

// Main Function
int main(int argc, char* argv[])
{
    Hello_World();
    Hello_Number(23);

    return 0;
}
// Function Definitions
// To document your functions type: ,cfu

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_world
 *  Description: Print Hello world message 
 * =====================================================================================
 */
void Hello_World()
{
    printf("Hello World\n");
    return;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_Number
 *  Description:  Prints the value of a number
 *        Param1: num => integer value
 *       Return: nothing
 * =====================================================================================
 */
void Hello_Number(int num)
{
    printf("Hello %d number\n", num);
    return;
}


