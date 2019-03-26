/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  Implemetation library
 *
 *        Version:  1.0
 *        Created:  03/26/2019 09:11:38 AM
 *       Revision:  none
 *       Compiler:  gcc ShoppingCart.c -o ShoppingCart.out -lm
 *          Usage:  ./ShoppingCart.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "ShoppingCart.h"
// Constants

// Function Defenitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetItemsInCart
 *  Description:  Get the items from the Shopping cart
 *         Args:  ShoppingCart pointer/address
 *       Return:  Number of items in cart (int) 
 * =====================================================================================
 */
int GetNumItemsInCart(ShoppingCart* cart)
{
    int i = 0;

    return i;
}


 /* ===  FUNCTION  ======================================================================
 *         Name:  GetCostOfCart
 *  Description:  Get the items'cost from the Shopping cart
 *         Args:  ShoppingCart pointer/address
 *       Return:  Cost of items in cart (int) 
 * =====================================================================================
 */
int GetCostOfCart(ShoppingCart* cart)
{
    int i = 0;

    return i;
}


 /* ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  PrintTotal from the Shopping cart
 *         Args:  ShoppingCart pointer/address
 *       Return:  None
 * =====================================================================================
 */
void PrintTotal(ShoppingCart* cart)
{
    return;
}


 /* ===  FUNCTION  ======================================================================
 *         Name:  PrinDescription
   Description:  PrintDescription of item from the Shopping cart
 *         Args:  ShoppingCart pointer/address
 *       Return:  None
 * =====================================================================================
 */
void PrintDescriptions(ShoppingCart* cart)
{
    return;
}


 /* ===  FUNCTION  ======================================================================
 *         Name:  AddItems
 *  Description:  Add a new ItemToPurchase to the Shopping cart
 *         Arg1:  ItemsToPurchase pointer/address,
 *         Arg2:  ShoppingCart pointer/address
 *       Return:  ShoppingCart variable (by value)
 * =====================================================================================
 */
ShoppingCart AddItems(ItemToPurchase* item, ShoppingCart* cart)
{
    return *cart;  // dererence the pointer to return the values of the structure
}


 /* ===  FUNCTION  ======================================================================
 *         Name:  RemoveItems
 *  Description:  Remove an ItemToPurchase based on the name from the Shopping cart
 *         Arg1:  ItemName Description,
 *         Arg2:  ShoppingCart pointer/address
 *       Return:  ShoppingCart variable (by value)
 * =====================================================================================
 */
ShoppingCart RemoveItems(char name[], ShoppingCart* cart)
{
    return *cart;  // dererence the pointer to return the values of the structure
}


 /* ===  FUNCTION  ======================================================================
 *         Name:  ModifyItems
 *  Description:  Modify an ItemToPurchase from the Shopping cart
 *         Arg1:  ItemsToPurchase pointer/address,
 *         Arg2:  ShoppingCart pointer/address
 *       Return:  ShoppingCart variable (by value)
 * =====================================================================================
 */
ShoppingCart ModifyItems(ItemToPurchase* item, ShoppingCart* cart)
{
    return *cart;  // dererence the pointer to return the values of the structure
}
