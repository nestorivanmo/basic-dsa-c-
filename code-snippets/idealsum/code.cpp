#include <bits/stdc++.h>
using namespace std;

int ok, T, N;
long long P, A[1005];

int binarySearch(long long elem, int left, int right){
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == elem) {
            return 1;
        } else if (A[mid] < elem) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {

    cin >> T;
    for (int t=1; t<=T; t++) {
        cin >> N;
        for (int i=1; i<=N; ++i)
            cin >> A[i];
        cin >> P;
        sort(A+1, A+N+1);
        ok = 0;
        for (int i=1; i<N; ++i)
            for (int j=i+1; j<=N; ++j) {
                long long elem = P - A[i] - A[j];
                int k = binarySearch(elem, j+1, N);
                if (k == 1) {
                    ok = 1;
                }
            }

        if (ok == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}