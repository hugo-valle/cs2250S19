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
 *  Description:  Defualt Constructor for Item to purchase. 
 * =====================================================================================
 */
ItemToPurchase::ItemToPurchase() 
{
   itemName = "none";
   itemDescription = "none";
   itemPrice = 0;
   itemQuantity = 0;
   
   return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ItemToPurchase
 *  Description:  Constructor with parametersfor Item to purchase. 
 * =====================================================================================
 */
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity) 
{
    itemName = name;
    itemDescription = description;
    itemPrice = price;
    itemQuantity = quantity;

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetName
 *  Description:  Set the name variable
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetDescription
 *  Description:  Set the description variable
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
 *         Name:  GetDescription
 *  Description:  Get the description variable
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
 *         Name:  PrintItemCost
 *  Description:  Print Item Purchased
 * =====================================================================================
 */
void ItemToPurchase::PrintItemCost() {
   cout << itemName << " " << itemQuantity << " @ $" << itemPrice
   << " = $" << itemPrice * itemQuantity << endl;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemDescription
 *  Description:  Print Item Description
 * =====================================================================================
 */
void ItemToPurchase::PrintItemDescription() {
   cout << itemName << ": " << itemDescription << endl;
}
