#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int max = N;
    N += 1;
    int f[N+2];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= N; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    int pos = -1;
    for (int i=0; i<= max; ++i) {
        if (max == f[i]) {
            pos = i;
            break;
        }
    }
    cout << pos;
    return 0;
}