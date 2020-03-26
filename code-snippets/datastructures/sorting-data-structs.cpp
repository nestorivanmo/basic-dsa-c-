#include <bits/stdc++.h>
using namespace std;

struct Car {
    int speed, price;
}cars[100];

void printing(Car prod) {
    cout << "Speed: " << prod.speed << "\n";
    cout << "Price: " << prod.price << "\n";
}

bool cmp (Car A, Car B) {
    //if (A.speed != B.speed) return A.speed > B.speed;
    //else return A.price < B.price ;

    return ((1.0*A.speed )/ A.price) > ((1.0*B.speed) / B.price);
}

int main() {

    cars[1].speed = 100; cars[1].price = 50;
    cars[2].speed = 100; cars[2].price = 100;
    cars[3].speed = 45; cars[3].price = 78;
    cars[4].speed = 234; cars[4].price = 500;
    cars[5].speed = 100; cars[5].price = 82;
    cars[6].speed = 234; cars[6].price = 320;

    sort(cars+1, cars+7, cmp);

    return 0;
}