#include <bits/stdc++.h>
using namespace std;

struct Product {
    double price;
    char name[20];

    Product() {
        price = 0;
        memset(name, 0, sizeof(name));
    }

    Product (double newPrice) {
        price = newPrice;
    }

    Product (int newPrice) {
        price = newPrice + 10;
    }

    Product (char newName[], double newPrice) {
        price = newPrice;
        memset (name, 0, sizeof(name)); //clean name array
        strcpy(name, newName);
    }
};

void printing(Product prod) {
    cout << "Name: " << prod.name << "\n";
    cout << "Price: " << prod.price << "\n";
}

int main() {

    Product abc;
    abc.price = 5;
    printing(abc);
    Product X(10.0);
    printing(X);
    Product Y(10);
    printing(Y);
    Product Z("Apple", 2.5);
    printing(Z);

    return 0;
}