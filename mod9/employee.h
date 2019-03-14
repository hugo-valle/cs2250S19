/*
 * =====================================================================================
 *
 *       Filename:  employee.h
 *
 *    Description:  Employee Library
 *
 *        Version:  1.0
 *        Created:  03/12/2019 10:09:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  EMPLOYEE__INC__
#define  EMPLOYEE__INC__
// Constants & Globals
#define TAXRATE1 0.10    // 10%
#define TAXRATE2 0.25    // 25%
#define TAXRATE3 0.75    // 75%

typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
    double netPay;
    double taxRate;
    double grossPay;

} Employee;

// Function Prototypes
double CalcNet(Employee emp);  // pass by value
double CalcGross(Employee* emp);  // pass by reference
void CreateEmployee(Employee* emp, int idNum);
void CalcPay(Employee* emp);
void DisplayEmp(const Employee* emp);

#endif /* ----- #ifndef EMPLOYEE__INC__ ----- */

