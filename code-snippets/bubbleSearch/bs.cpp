#include <bits/stdc++.h>
using namespace std;

void bubbleSearch(int A[], int n, bool desc) {
    for (int i=0; i<n; ++i)
        for (int j=i+1; j<n; ++j) {
            if (desc) {
                if (A[i] < A[j]) {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j]= temp;
                }
            } else {
                if (A[i] > A[j]) {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j]= temp;
                }
            }
        }

    for (int i=0; i<n; ++i) {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main() {
    int A[] = {2,3,1,5,4,4};
    bubbleSearch(A, 6, true);
    return 0;
}