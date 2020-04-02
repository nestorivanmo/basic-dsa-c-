#include <bits/stdc++.h>
using namespace std;

int main() {
    int max;
    cin >> max;

    int f[max+2];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= max; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    int b[f[max]];
    int j = 0;
    int k = 0;
    for (int i=0; i<max; ++i) {
        if (i == f[j]) {
            if (i == 1) {
                j += 2;
            } else {
                j += 1;
            }
        } else {
            b[k] = i;
            k += 1;
        }
    }

    if (max == 0 || max == 1 || max < 0) {
        cout << " ";
    } else {
        for (int i=0; i < k; ++i) {
            cout << b[i] << " ";
        }
    }
    return 0;
}