#include<bits/stdc++.h>
using namespace std;

int Queue[101], frontInd, backInd = -1;

void push(int x) {
    ++backInd;
    Queue[backInd] = x;
}

void pop() {
    Queue[frontInd] = 0;
    ++frontInd;
}

int front() {
    return Queue[frontInd];
}

bool isEmpty() {
    return (backInd < frontInd);
}

void printQ() {
    for (int i=frontInd; i<=backInd; ++i) {
        cout << Queue[i] << " ";
    }
}

int main() {

    int array[6] = {1,1,1,4,5,6};
    int operations[2][3] = {{1,5,2}, {2,3,10}};

    for (int i : array) {
        push(i);
    }

    for (int i=0; i<2; ++i) {
        for (int j=0; j<6; ++j) {
            int frontElem = front();
            if (j+1 >= operations[i][0] && j+1 <= operations[i][1]) {
                frontElem += operations[i][2];
            }
            pop();
            push(frontElem);
        }
    }

    printQ();
    return 0;
}