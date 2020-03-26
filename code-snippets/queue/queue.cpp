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

int main() {

    cout << "Queue\n";

    push(1);
    push(2);
    push(3);

    cout << "front: " << front();
    cout << "isEmpty: " << isEmpty();

    pop();

    cout << "front: " << front();
    cout << "isEmpty: " << isEmpty();

    pop();
    pop();

    cout << "front: " << front();
    cout << "isEmpty: " << isEmpty();

    return 0;
}