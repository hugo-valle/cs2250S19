/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  Items to purchase library
 *
 *        Version:  1.0
 *        Created:  04/09/2019 03:14:56 PM
 *       Revision:  none
 *       Compiler (C++):  g++ ItemToPurchase.cpp -o ItemToPurchase.out -lm
 *          Usage:  ./ItemToPurchase.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
#include "ItemToPurchase.h"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ItemToPurchase
 *  Description:  Constructor for Item to purchase. 
 *  Set itemName = "none"
 *  itemPrice = 0, and itemQuantity = 0
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetName
 *  Description:  Set the name variable
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetPrice
 *  Description:  Set the Purchase price
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetQuantity
 *  Description:  Set the item quantity 
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetName
 *  Description:  Get the name variable
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetPrice
 *  Description:  Get the Purchase price
 * =====================================================================================
 */




/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetQuantity
 *  Description:  Get the item quantity 
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Print
 *  Description:  Print Item Purchased
 * =====================================================================================
 */
void ItemToPurchase::Print() 
{
    cout << itemName << " " << itemQuantity << " @ $"
        << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}
