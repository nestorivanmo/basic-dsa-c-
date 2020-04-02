#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int max, int n, bool firstOccurrence){
    int left = 0, mid, right = max - 1, result = -1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == n) {
            result = mid;
            if (firstOccurrence) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else if (A[mid] < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int N, K, h;
    int NK[2];// = {5, 1};
    for (int i = 0; i < 2; ++i) {
        if (cin >> h)
            NK[i] = h;
    }
    N = NK[0];
    K = NK[1];

    int A[N];// = {1,2,3,2,1};
    for (int i=0; i < N; ++i) {
        cin >> A[i];
    }
    sort(A, A+N);

    int firstOccurrence = binarySearch(A, N, K, true);
    int lastOccurrence = binarySearch(A, N, K, false) + 1;

    if (firstOccurrence == -1) {
        cout << 0;
    } else {
        cout << lastOccurrence - firstOccurrence;
    }

    return 0;
}