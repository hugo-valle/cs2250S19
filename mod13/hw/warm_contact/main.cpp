/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main program for Contact Node
 *
 *        Version:  1.0
 *        Created:  04/11/2019 04:14:43 PM
 *       Revision:  none
 *       Compiler (C++):  g++ main.cpp ContactNode.cpp -o main.out -lm
 *          Usage:  ./main.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
#include "ContactNode.h"
using namespace std;

// Main Program
int main() 
{
    string fullName;
    string phoneNum;
    ContactNode* headContact = 0;  // set pointer to "NULL" or 0
    ContactNode* nextContact1 = 0;
    ContactNode* nextContact2 = 0;
    ContactNode* currContact = 0;

    // Get first person
    cout << "Person 1" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;

    //First contact node (head of heap)
    // use dynamically allocated memory here
    // ... 

    // Get second person
    cin.ignore();
    cout << "Person 2" << endl;
    cout << "Enter name:" << endl;
    getline(cin, fullName);
    cout << "Enter phone number:" << endl;
    cin >> phoneNum;
    cout << "You entered: " << fullName << ", " << phoneNum << endl << endl;

    // 
    // Create a new contact here with "new" 
    // Use the insertAfter to conect the two nodes
    // ...


    // Get third person
    // ...

    // 
    // Create a new contact here with "new" 
    // Use the insertAfter to conect the two nodes
    // ...


    cout << "CONTACT LIST" << endl;
    //
    // ...
    // 
    // Loop over contacts
    while (currContact != 0) 
    {
        currContact->PrintContactNode();
        currContact = currContact->GetNext();
        cout << endl;
    }

    return 0;
}
