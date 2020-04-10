#include <iostream>
using namespace std;

int reverse(int n) {
    int remainder, reverseN = 0;
    while (n != 0) {
        remainder = n%10;
        reverseN = reverseN*10 + remainder;
        n /= 10;
    }
    return reverseN;
}

int main () {
    int N;
    int nums[10000][2];

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i][0] >> nums[i][1];
    }
    for (int i = 0; i < N; i++) { 
        cout << reverse(reverse(nums[i][0]) + reverse(nums[i][1])) << "\n";
    }
    
    return 0;
}