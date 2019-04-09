/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2019 03:36:59 PM
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
#include <string>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

class ShoppingCart 
{
    private:
        string customerName;
        string currentDate;
        vector<ItemToPurchase> cartItems;
    public:
        // Constructors
        ShoppingCart();
        ShoppingCart(string name, string date);
        // Declare Getters
        string GetCustomerName() const;
        string GetDate() const;

        // Other Methods
        void AddItem(ItemToPurchase item);
        void RemoveItem(string name);

        void ModifyItem(ItemToPurchase item);

        int GetNumItemsInCart();
        double GetCostOfCart();

        void PrintTotal();
        void PrintDescriptions();

};
#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

