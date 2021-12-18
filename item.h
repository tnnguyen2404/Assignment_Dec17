#include <string>
using namespace std;

class Item {
private:
    string name;
    long id;
    double price;
    int itemCount;

public:

    Item(string name, long id, double price, int itemCount) {
        this->name = name;
        this->id = id;
        this->price = price;
        this->itemCount = itemCount;
    }

    void setItemCount(int itemCount) {
        this->itemCount = itemCount;
    }

    string getName() {
        return name;
    }

    long getID() {
        return id;
    }

    double getPrice() {
        return price;
    }

    int getItemCount() {
        return itemCount;
    }

};