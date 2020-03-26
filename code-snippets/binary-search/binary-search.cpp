#include<bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[1000], numberOfElements;
int BinarySearch(int X){
    int Left=1, Right=numberOfElements, mid;
    while (Left <= Right) {
        mid = (Left + Right) / 2;
        if (X == A[mid]) return mid;
        else if (X < A[mid]) Right = mid - 1;
        else Left = mid + 1;
    }
    return -1;
}

int main() {
    f>>numberOfElements;
    for (int i=1; i<= numberOfElements; ++i) {
        f>>A[i];
    }
    cout << BinarySearch(8);
    return 0;
}