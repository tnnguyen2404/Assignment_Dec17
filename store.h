#include <vector>
#include <iostream>
#include "item.h"
using namespace std;


class Store {
private:
    vector<Item> items;

public:

    Store() {
        items.clear();
    }

    void addItems(Item item) {
        items.push_back(item);
    }

    void printItem() {
        for (int i = 0; i < items.size(); i++) {
            cout << items[i].getName() << ' ' << items[i].getID() << ' ' << items[i].getItemCount() << '\n';
        }
    }

    int getItemCount() {
        return items.size();
    }
};