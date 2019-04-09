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
        int itemPrice;
        int itemQuantity;

    public:
        ItemToPurchase();
        // Setters here 
        void SetName(string name);
        void SetPrice(int price);
        void SetQuantity(int quantity);
        // Getters here. Remember to make them const
        string GetName() const;
        int GetPrice() const;
        int GetQuantity() const;
        // Other Methods
        void Print();
};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

