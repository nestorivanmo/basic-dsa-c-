#include<bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[101], X, n, maximum;
int main() {
    f>>n;
    for (int i=1; i<=n; ++i) {
        f>>X;
        ++A[X];
        maximum = max(maximum, X);
    }
    for (int i=0; i<maximum; ++i) {
        if (A[i] > 0) {
            for (int j = 0; j < A[i]; ++j) {
                cout << i << " ";
            }
        }
    }
    return 0;
}
