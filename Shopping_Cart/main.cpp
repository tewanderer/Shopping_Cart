#include "ShoppingCart.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    ItemToPurchase item;
    ItemToPurchase item2;
    string name;
    int price;
    int quantity;
    int totalCost;

    cout << "Item 1" << endl << "Enter the item name:" << endl;
    getline(cin, name);

    cout << "Enter the item price:" << endl;
    cin >> price;

    cout << "Enter the item quantity:" << endl;
    cin >> quantity;

    item.SetName(name);
    item.SetPrice(price);
    item.SetQuantity(quantity);

    cin.ignore();

    cout << "Item 2" << endl << "Enter the item name:" << endl;
    getline(cin, name);

    cout << "Enter the item price:" << endl;
    cin >> price;

    cout << "Enter the item quantity:" << endl;
    cin >> quantity;

    item2.SetName(name);
    item2.SetPrice(price);
    item2.SetQuantity(quantity);

    totalCost = (item.GetPrice() * item.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());

    cout << "TOTAL COST" << endl;
    cout << item.GetName() << " " << item.GetQuantity() << " @ " << "$" << item.GetPrice() << " = $" << item.GetPrice() * item.GetQuantity() << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ " << "$" << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;

    cout << "Total: $" << totalCost;
    
    return 0;
}
