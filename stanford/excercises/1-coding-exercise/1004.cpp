#include <iostream>
using namespace std; 

int main () {
    double months[12];
    for (int i = 0; i < 12; i++) 
        cin >> months[i];

    double avg = 0.0;
    double sum = 0.0;
    for (int i=0; i < 12; i++) {
        sum += months[i];
    }

    cout << "$" << (sum / 12) << endl;

    return 0;
}