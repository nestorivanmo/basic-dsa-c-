#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, low, high;
    int number_of_entries = 0;
    cin >> number_of_entries;
    int nums[number_of_entries];
    for(int i = 0; i < number_of_entries; ++i) {
        if (cin >> n)
            nums[i] = n;
    }
    int ranges[2];
    for (int i = 0; i < 2; ++i) {
        if (cin >> n)
            ranges[i] = n;
    }
    low = ranges[0];
    high = ranges[1];

    sort(nums, nums + number_of_entries);

    int max = 0;
    for (int i=0; i < number_of_entries; ++i) {
        if (nums[i] >= low && nums[i] <= high) {
            max += 1;
        }
    }

    cout << max;

    return 0;
}