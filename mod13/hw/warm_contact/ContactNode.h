/*
 * =====================================================================================
 *
 *       Filename:  ContactNode.h
 *
 *    Description:  Contact Note Library
 *
 *        Version:  1.0
 *        Created:  04/11/2019 04:14:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTNODE__INC__
#define  CONTACTNODE__INC__

#include <string>
using namespace std;

class ContactNode 
{
    private:
        string contactName;
        string contactPhoneNum;
        ContactNode* nextNodePtr;   // pointer to next object

    public:
        // Default Constructor
        ContactNode();
        // Param based Constructor
        ContactNode(string initName, string initPhoneNum, 
                ContactNode* nextLoc = 0);
        // Getters
        string GetName() const;
        string GetPhoneNumber() const;
        // Other methods
        ContactNode* GetNext();
        void InsertAfter(ContactNode* nodePtr);
        void PrintContactNode();
};

#endif
