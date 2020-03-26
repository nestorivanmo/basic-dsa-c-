#include <bits/stdc++.h>
using namespace std;

struct Book {
    char title[20];
    char author[20];
    int id;
    float price;
}book1;

void printBook(Book book) {
    cout << "Book title: " << book.title << "\n";
    cout << "Book author: " << book.author << "\n";
    cout << "Book price: " << book.price << "\n";
    cout << "Book id: " << book.id << "\n";
}

int main() {

    book1.id = 10;
    book1.price = 13.67;
    strcpy(book1.title, "El Aleph");
    strcpy(book1.author, "Borges");

    printBook(book1);

    return 0;
}