/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee structure for record keeping
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:05 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out -lm
 *          Usage:  ./employee.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & Globals
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
    double netPay;
    double taxRate;
    double grossPay;

} Employee;

#define TAXRATE1 0.10    // 10%
#define TAXRATE2 0.25    // 25%
#define TAXRATE3 0.75    // 75%

// Function Prototypes
double CalcNet(Employee emp);  // pass by value
double CalcGross(Employee* emp);  // pass by reference
void CreateEmployee(Employee* emp);
void CalcPay(Employee* emp);
void DisplayEmp(const Employee* emp);


// Main Function
int main(int argc, char* argv[])
{
    Employee waldo;

    CreateEmployee(&waldo);
    CalcPay(&waldo);
    DisplayEmp(&waldo);

    

    return 0;
}
// Function Defenitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcNet
 *  Description:  Calculate the net pay based on payRate and hours
 *  Param: Employee structure
 *  Return: Net Pay as double
 * =====================================================================================
 */
double CalcNet(Employee emp)
{
    return emp.payRate * emp.hours * (1 - emp.taxRate);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcGross
 *  Description:  Calculate the gross pay based on payRate and hours
 *  Param: Employee structure
 *  Return: Gross Pay as double
 * =====================================================================================
 */
double CalcGross(Employee* emp) // pass by reference
{
    // To access structure members when using a pointer (address)
    // use the dereference operator  "->"
    return emp->payRate * emp->hours;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreateEmployee
 *  Description:  Create Employee record
 *  Param: Employee Structure
 * =====================================================================================
 */
void CreateEmployee(Employee* emp)
{
    emp->idNum = 1;
    emp->payRate =7.50;
    emp->hours =20;
    emp->taxRate = TAXRATE1;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcPay
 *  Description:  Calculate the Gross and Net pay for the Employee
 *  Param: Employee Structure
 * =====================================================================================
 */
void CalcPay(Employee* emp)
{
    //Note: emp in an address(pointer), so if you need to pass it to function
    // that requires a pointer, then just use the name: emp
    // if you need to pass the VALUES, you need to dereference the reference
    // so use the *emp to access the values at the address
    //
    emp->netPay = CalcNet(*emp);           // pass by value
    emp->grossPay = CalcGross(emp);     // pass by reference
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayEmp
 *  Description:  Display Employee Information
 *  Param: Employee Structure
 * =====================================================================================
 */
void DisplayEmp(const Employee* emp)
{
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            emp->hours, emp->payRate, emp->netPay);

    printf("Your gross pay is %lf\n", emp->grossPay);
    return;
}
