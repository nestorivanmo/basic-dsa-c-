#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<float> arr;
    float a = -1;
    int j = 0;
    while (a != 0.00) {
        cin >> a;
        arr.push_back(a);
    }

    float z = 0.0;
    float i = 2.0;
    vector<float>::iterator c;
    for (c = arr.begin(); c < arr.end(); ++c) {
        while (z < *c) {
            z += 1 / i;
            ++i;
        }
        if (*c == 0.00) break; 
        else cout << i-2 << " card(s)\n";
        z = 0.0;
        i = 2.0;
    }

    return 0;
}