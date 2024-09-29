#pragma once
#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    ItemToPurchase(string name, string description, int price, int quantity);
    void SetName(string name);
    void SetPrice(int price);
    void SetQuantity(int quantity);
    void SetDescription(string description);
    void PrintItemCost();
    void PrintItemDescription();

    string GetName();
    int GetPrice();
    int GetQuantity();
    string GetDescription();

private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;

};
