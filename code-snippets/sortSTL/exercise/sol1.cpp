#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int max, int X, bool firstOccurrence) {
    int occurrence = -1;

    int left = 0, mid = 0, right = max - 1;

    while (left <= right ) {
        mid = (left + right) / 2;
        if (A[mid] == X) {
            occurrence = mid;

            if (firstOccurrence) {
                right = mid - 1;
            } else  {
                left = mid + 1;
            }

        } else if (A[mid] < X) {
            left = mid + 1;
        } else { //X < A[mid]
            right = mid - 1;
        }
    }

    return occurrence;
}

int findMajorityElement(int A[], int n, int L) {
    int majorityElement = -1;

    for (int i=0; i<= n; ++i) {
        int firstOccurrence = binarySearch(A, n, i, true);
        int lastOccurrence = binarySearch(A, n, i, false) + 1;
        int numberOfAppearances = lastOccurrence - firstOccurrence;

        if (numberOfAppearances >= L) {
            return i;
        }
    }

    return majorityElement;
}

int main() {

    int A[] = {1,1,4,5,1,6,6,1,1,3,1};
    int n = 11;
    int L = (n/2) + 1;

    sort(A+1, A+n+1);
    cout << findMajorityElement(A, n, L);

    return 0;
}