/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  A shopping cart structure
 *
 *        Version:  1.0
 *        Created:  03/26/2019 08:58:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART__INC__

#include "ItemToPurchase.h"

#define ITEMS 10
#define SIZE 50

typedef struct ShoppingCart_struct
{
    char custName[SIZE];
    char currentDate[SIZE];
    ItemToPurchase cartItems[ITEMS];
    int cartSize;
}ShoppingCart;

int GetNumItemsInCart(ShoppingCart* cart);
int GetCostOfCart(ShoppingCart* cart);
void PrintTotal(ShoppingCart* cart);
void PrintDescriptions(ShoppingCart* cart);
ShoppingCart AddItems(ItemToPurchase* item, ShoppingCart* cart);
ShoppingCart RemoveItems(char name[], ShoppingCart* cart);
ShoppingCart ModifyItems(ItemToPurchase* item, ShoppingCart* cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

