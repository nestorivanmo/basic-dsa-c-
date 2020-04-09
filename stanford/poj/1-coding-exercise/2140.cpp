#include <iostream>
using namespace std; 

int main() {

    int N; 
    cin >> N;

    int ways = 1;
    int currCount = 0;

    int startFrom = 1;
    int i = startFrom;
    while (i < N) {
        currCount += i;
        if (currCount == N) {
            ways += 1;
            currCount = 0;
            startFrom += 1; 
            i = startFrom;
        } else if (currCount > N) {
            currCount = 0;
            startFrom += 1;
            i = startFrom;
        } else {
            i += 1;
        }
    }


    cout << ways ;   

    return 0;
}