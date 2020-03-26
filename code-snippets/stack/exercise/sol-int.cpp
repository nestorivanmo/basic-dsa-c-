#include<bits/stdc++.h>
using namespace std;

int Stack[100], ind;

void push(int x) {
    ++ind;
    Stack[ind] = x;
}
bool isEmpty() {
    return ind < 1;
}
void pop() {
    Stack[ind] = 0;
    --ind;
}
int top() {
    return Stack[ind];
}

bool match(int s1, char s2) {
    return (s1 == 1 && s2 == '}') || (s1 == 2 && s2 == ']') || (s1 == 3 && s2 == ')');
}

int main() {

    char inputArray[4]= {'(','[',']',')'};

    for (int i=0; i<4; ++i) {
        char c = inputArray[i];

        if (c == '{') push(1);
        if (c == '[') push(2);
        if (c == '(') push(3);

        if ((c == '}') || (c == ']') || (c == ')')) {
            int topElem = top();
            if (isEmpty() || !match(topElem, c)) {
                cout << false;
                return false;
            } else {
                pop();
            }
        }
    }
    cout << isEmpty();
    return isEmpty();
}