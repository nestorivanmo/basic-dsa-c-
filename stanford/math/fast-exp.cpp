#include<bits/stdc++.h>
using namespace std;

double rec_pow(double a, int n) {
    if (n==0) return 1;
    if (n==1) return a;
    double t = rec_pow(a, n/2);
    return t * t * rec_pow(a, n%2);
}

double non_rec_pow(double a, int n) {
    double ret = 1;
    while (n) {
        if (n%2 == 1) ret *= a;
        a *= a;
        n /= 2;
    }
    return ret;
}

int main () {
    cout << rec_pow(5.0, 2);
    cout << non_rec_pow(5.0, 2);
    return 0;
}