#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl << endl;

}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;

    switch (option) {
    case 'a': {
        ItemToPurchase newItem;

        cout << "ADD ITEM TO CART" << endl;
        cout << "Enter the item name:" << endl;
        cin.ignore();
        getline(cin, itemName);

        cout << "Enter the item description:" << endl;
        getline(cin, itemDescription);

        cout << "Enter the item price:" << endl;
        cin >> itemPrice;

        cout << "Enter the item quantity:" << endl;
        cin >> itemQuantity;

        newItem.SetName(itemName);
        newItem.SetDescription(itemDescription);
        newItem.SetPrice(itemPrice);
        newItem.SetQuantity(itemQuantity);
        theCart.AddItem(newItem);

        PrintMenu();
        break;
    }

    case 'd': {
        cout << "REMOVE ITEM FROM CART" << endl;
        cin.ignore();
        cout << "Enter name of item to remove: " << endl;
        getline(cin, itemName);
        theCart.RemoveItem(itemName);

        PrintMenu();
        break;
    }

    case 'c': {
        cout << "CHANGE ITEM QUANTITY" << endl;
        PrintMenu(); //no idea how to do this, will try fixing later
        break;
    }

    case 'i': {
        cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
        theCart.PrintDescriptions();
        PrintMenu();
        break;
    }
    case 'o': {
        cout << "OUTPUT SHOPPING CART" << endl;
        theCart.PrintTotal();
        cout << endl;
        PrintMenu();
        break;
    }
    case 'q': {
        break;
    }
    default: {
        break;
    }
    }
}

int main() {
    string name;
    string date;
    char option;

    cout << "Enter customer's name:" << endl;
    getline(cin, name);
    cout << "Enter today's date:" << endl;
    getline(cin, date);

    ShoppingCart userCart(name, date);
    cout << "Customer Name: " << userCart.GetCustomerName() << endl;
    cout << "Today's date: " << userCart.GetDate() << endl;

    PrintMenu();

    do {
        cout << "Choose an option:" << endl;
        cin >> option;

        if (option != 'q') {
            ExecuteMenu(option, userCart);
        }
    } while (option != 'q');

    return 0;
}
