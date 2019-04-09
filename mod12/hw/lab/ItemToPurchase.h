/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  Items to purchase
 *
 *        Version:  1.0
 *        Created:  04/09/2019 03:13:15 PM
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
#include <string>
using namespace std;

class ItemToPurchase 
{
    private:
        string itemName;
        string itemDescription;
        int itemPrice;
        int itemQuantity;

    public:
        ItemToPurchase();
        ItemToPurchase(string name, string description, 
                int price, int quantity = 1);

        // Define your Setters
        void SetName(string name);
        void SetDescription(string description);
        void SetPrice(int price);
        void SetQuantity(int quantity);

        // Define your Getters
        string GetDescription() const;
        int GetPrice() const;
        int GetQuantity() const;

        // Other methods
        void PrintItemCost();
        void PrintItemDescription();
};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

