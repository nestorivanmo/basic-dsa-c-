#include <bits/stdc++.h>
using namespace std;

struct Car {
    char model[20];
    int year;
    int id;
}myCar, cars[1000];

void printing(Car car) {
    cout << "Model: " << car.model << "\n";
    cout << "Year: " << car.year << "\n";
    cout << "Id: " << car.id << "\n";
}

int main() {

    strcpy(myCar.model, "Fast and furious");
    myCar.year = 2016;

    cout << myCar.model[0] << myCar.model[1] << myCar.model[2];
    cout << myCar.model[3];

    for (int i=1; i<= 100; ++i) {
        cars[i].id = i;
        strcpy(cars[i].model, "Fast and furious");
        cars[i].year = 2016;
    }

    printing(cars[13]);
    printing(cars[37]);

    return 0;
}