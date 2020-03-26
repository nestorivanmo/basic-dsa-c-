#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int A[], int max, int X, bool firstOccurrence) {
    int left = 0, right = max - 1 , mid = 0, result = -1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == X) {
            result = mid;
            if (firstOccurrence) right = mid - 1;
            else                left  = mid + 1;
        } else if (A[mid] < X) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}


int main () {

    int A[] = {1,1,1,3,3,3,3,3,3,3,5,6,6,8,9};
    int last = 0, first = 0;

    int X = 10;

    int firstOccurrence = BinarySearch(A, 16, X, true);
    int lastOccurrence = BinarySearch(A, 16, X, false);

    cout << firstOccurrence << "\n";
    cout << lastOccurrence << "\n";

    if (firstOccurrence == -1) {
        cout << "Element is not in the array" << "\n";
    } else {
        cout << (lastOccurrence - firstOccurrence) + 1 << "\n";
    }

    return 0;
}