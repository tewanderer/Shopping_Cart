#include "ItemToPurchase.h"
#include <string>
#include <iostream>
using namespace std;

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity)
    : itemName(name), itemDescription(description), itemPrice(price), itemQuantity(quantity) {}

void ItemToPurchase::SetName(string name) {
    itemName = name;
}

void ItemToPurchase::SetDescription(string description) {
    itemDescription = description;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

string ItemToPurchase::GetName() {
    return itemName;
}

int ItemToPurchase::GetPrice() {
    return itemPrice;
}

int ItemToPurchase::GetQuantity() {
    return itemQuantity;
}

string ItemToPurchase::GetDescription() {
    return itemDescription;
}

void ItemToPurchase::PrintItemCost() {
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemQuantity * itemPrice;
}
void ItemToPurchase::PrintItemDescription() {
    cout << itemName << ": " << itemDescription;

}

