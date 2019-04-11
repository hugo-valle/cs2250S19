/*
 * =====================================================================================
 *
 *       Filename:  ContactNode.cpp
 *
 *    Description: Contact Library
 *
 *        Version:  1.0
 *        Created:  04/11/2019 04:14:43 PM
 *       Revision:  none
 *       Compiler (C++):  g++ ContactNode.cpp -o ContactNode.out -lm
 *          Usage:  ./ContactNode.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// Function Defenitions
#include <iostream>
using namespace std;

#include "ContactNode.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ContactNode
 *  Description:  Default constructor. This constructor will NOT set any data
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ContactNode
 *  Description:  Default constructor. This constructor sets the object's values
 *  string initName
 *  string initPhoneNum
 *  ContactNode* nextLoc
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  InsertAfter
 *  Description:  Insert a node after the last one
 * =====================================================================================
 */
void ContactNode::InsertAfter(ContactNode* nodePtr) 
{
    // here you may use a temporary pointer (see below)
//    ContactNode* tmpNext = 0;
    // or directly use the current object (this->) to 
    // link it to the nodePrt, and setting notePrt->nextNodePtr to NULL or 0

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetName
 *  Description:  Return the contact's name
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetPhoneNumber
 *  Description:  Return the phone number
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNext
 *  Description:  Return the next node address.
 * =====================================================================================
 */
ContactNode* ContactNode::GetNext() 
{
    return this->nextNodePtr;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintContactNode
 *  Description:  Print Contact Node information
 * =====================================================================================
 */
void ContactNode::PrintContactNode() 
{
    cout << "Name: " << this->contactName << endl;
    cout << "Phone number: " << this->contactPhoneNum << endl;
    return;
}
