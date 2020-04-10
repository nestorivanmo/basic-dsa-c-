#include<iostream>
using namespace std;

int pointDifference(int x, int y, int ref) {
    int diff = 0;
    diff += abs(x - ref);
    diff += abs(y - ref);
    return diff;
}

int main() {
    
    int S;
    cin >> S;

    int nums[1000];
    for (int i = 0; i < S; i++) {
        cin >> nums[i];
    }

    for (int x = 0; x < S; x++) {
        int U = nums[x];
        int slices = (2*U) + 1, diff, floorDiff;
        cout << "Scenario #" << x + 1 <<":\n";
        for (int level = 0; level < slices; level++) {
            floorDiff = U - abs(U - level);
            cout << "slice #" << level + 1 << ":\n";
            for (int y=0; y < slices; y++) {
                for (int x = 0; x < slices; x++) {
                    diff = pointDifference(x, y, U);
                    if (diff <= floorDiff) {
                        cout << diff + (abs(U - level));
                    } else {
                        cout << ".";
                    }
                }
                cout << "\n";
            }
        }
        cout << "\n";
    }


    return 0;
}