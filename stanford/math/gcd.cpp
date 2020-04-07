#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int r  = a%b;
        a = b; 
        b = r;
    }
    return a;
}

int main() {
    cout << gcd(4,3) << "\n";
    double a = 8.987656789;
    cout << abs(a) << "\n";
    return 0;
}