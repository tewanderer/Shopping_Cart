#pragma once
#include "ItemToPurchase.h"
#include <string>
#include <vector>
using namespace std;

class ShoppingCart
{
private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase>cartitems;

public:
    ShoppingCart();
    ShoppingCart(string name, string date);
    string GetCustomerName();
    string GetDate();
    void AddItem(ItemToPurchase item);
    void RemoveItem(string item);
    int GetNumItemsInCart();
    int GetCostOfCart();
    void PrintTotal();
    void PrintDescriptions();
};

