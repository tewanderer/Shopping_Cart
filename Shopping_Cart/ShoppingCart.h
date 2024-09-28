#pragma once
#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    void SetName(string name);
    void SetPrice(int price);
    void SetQuantity(int quantity);

    string GetName();
    int GetPrice();
    int GetQuantity();

private:
    string itemName;
    int itemPrice;
    int itemQuantity;

};

