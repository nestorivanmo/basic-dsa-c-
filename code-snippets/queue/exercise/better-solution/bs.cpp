#include<bits/stdc++.h>
using namespace std;
int auxB;
int main() {

    int A[10] = {0,0,0,0,0,0,0,0,0,0};
    int B[10] = {0,0,0,0,0,0,0,0,0,0};

    int operations[3][3] = {{3,6,5}, {1,4,10}, {5,8,10}};


    for (int i=0; i<3; ++i) {
        int left = operations[i][0];
        int right = operations[i][1];
        int value = operations[i][2];

        B[left] += value;
        if (right < 10) {
            B[right + 1] -= value;
        }
    }

    for (int i=0; i<10; ++i) {
        auxB += B[i];
        A[i] += auxB;

        cout << A[i] << "|";
    }

    return 0;
}