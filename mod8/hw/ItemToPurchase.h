/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  Items Library
 *
 *        Version:  1.0
 *        Created:  03/26/2019 08:44:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE__INC__

typedef struct ItemToPurchase_struct
{
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;


void MakeItemBlank(ItemToPurchase* item);           // by reference
void PrintItemCost(const ItemToPurchase* item);     // by const reference
void PrintItemDescription(const ItemToPurchase* item);

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

