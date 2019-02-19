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
int Get_Square(int num);
int Get_Number();
int Get_Sum(int num1, int num2);
double Get_BMI(double weight, double height);

// Main Function
int main(int argc, char* argv[])
{
    int i1 = 23;
    int num1, num2, sum;

    Hello_World();

    Hello_Number(i1);
    
    i1 = Get_Square(i1);
    Hello_Number(i1);

    i1 = Get_Number();
    Hello_Number(i1);

    num1 = Get_Number();
    Hello_Number(num1);
    num2 = Get_Number();
    Hello_Number(num2);
    sum = Get_Sum(num1, num2);
    Hello_Number(sum);

    double bmi = Get_BMI(65.8, 1.89);
    printf("your  BMI is [%lf]\n", bmi);
    printf("your  BMI is [%lf]\n", Get_BMI(65.8, 1.89));

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
    printf("Hola %d number\n", num);
    return;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Square
 *  Description:  Get the square of an integer number
 *  Param1: num => integer value
 *  Return: the square of num
 * =====================================================================================
 */
int Get_Square(int num)
{
    int square;
    // Algorithm
    square = num * num;

    return square;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Number
 *  Description:  Ask user to enter an integer and return it
 *  Param: None
 *  Return: User int input
 * =====================================================================================
 */
int Get_Number()
{
    int input;
    // Algorithm
    printf("Please enter an int value: ");
    scanf("%d", &input);
    return input;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Sum
 *  Description:  Return the sum of two integers
 *  Param1: First integer
 *  Param2: Second integer
 *  Return: First + Second
 * =====================================================================================
 */
int Get_Sum(int num1, int num2)
{
    return num1 + num2;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_BMI
 *  Description:  Calculate the Body Max Index
 *                  BMI = weight(kg)/height(m)^2
 *      Param1: Weight in kg
 *      Param2: Height in meters
 *      Return: BMI
 * =====================================================================================
 */
double Get_BMI(double weight, double height)
{
    double bmi;
    // ALgorithm
    bmi = weight/(height * height);
    return bmi;
}
