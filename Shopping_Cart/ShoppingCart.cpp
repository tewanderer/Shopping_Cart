#include "ShoppingCart.h"
#include <string>
#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date) {
    customerName = name;
    currentDate = date;
}

string ShoppingCart::GetCustomerName() {
    return customerName;
}

string ShoppingCart::GetDate() {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
    cartitems.push_back(item);
}

void ShoppingCart::RemoveItem(string item) {
    bool found = false;
    for ( unsigned int i = 0; i < cartitems.size(); i++) {
        if (item == cartitems.at(i).GetName()) {
            cartitems.erase(cartitems.begin() + i);
            found = true;
            break;
        }
    }
    if (found == false) {
        cout << "Item not found in cart. Nothing removed.";
    }
}
int ShoppingCart::GetNumItemsInCart() {
    int numItems = 0;
    for (unsigned int i = 0; i < cartitems.size(); i++) {
        numItems += cartitems.at(i).GetQuantity();
    }
    return numItems;
}

int ShoppingCart::GetCostOfCart() {
    int cost = 0;
    for (unsigned int i = 0; i < cartitems.size(); i++) {
        cost += cartitems.at(i).GetQuantity() * cartitems.at(i).GetPrice();
    }
    return cost;
}

void ShoppingCart::PrintTotal() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;
    if (cartitems.size() == 0) {
        cout << "SHOPPING CART IS EMPTY" << endl << endl;
    }
    for (unsigned int i = 0; i < cartitems.size(); i++) {
        cout << cartitems.at(i).GetName() << " " << cartitems.at(i).GetQuantity() << " " << "@ $" << cartitems.at(i).GetPrice() << " = $" << cartitems.at(i).GetQuantity() * cartitems.at(i).GetPrice() << endl;
    }
    cout << "Total: $" << GetCostOfCart() << endl;
}
void ShoppingCart::PrintDescriptions() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Item Descriptions" << endl;
    for (unsigned int i = 0; i < cartitems.size(); i++) {
        cout << cartitems.at(i).GetName() << ": " << cartitems.at(i).GetDescription() << endl;
    }
}
