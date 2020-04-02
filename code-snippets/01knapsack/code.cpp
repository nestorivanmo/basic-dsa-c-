#include <bits/stdc++.h>
using namespace std;

int main() {

    int W = 7;
    int N[4][2] = {{1,1}, {4,3}, {5,4}, {7,5}};
    int dp[4][8];

    for (int row=0; row < 4; row++) {
        for (int col=0; col < 8; col++) {
            if (row == 0) {
                if (col > 0) {
                    dp[row][col] = 1;
                }else {
                    dp[row][col] = 0;
                }
            } else {
                if (col == 0) {
                    dp[row][col] = 0;
                } else {
                    if (col < N[row][1]) {
                        dp[row][col] = max(dp[row-1][col], dp[row][col-1]);
                    } else {
                        int value = N[row][0];
                        int weight = N[row][1];
                        int a = dp[row-1][col];
                        int b = dp[row][col-1];
                        int c = value + dp[row-1][col - weight];
                        dp[row][col] = max(max(a, b), c);
                    }
                }

            }
        }
    }

    for (int row=0; row < 4; row++) {
        for (int col=0; col < 8; col++) {
            if (col == 7) {
                cout << dp[row][col] << "\n";
            } else {
                cout << dp[row][col] << " ";
            }
        }
    }

    cout << "max value: " << dp[4-1][8-1];

    return 0;
}