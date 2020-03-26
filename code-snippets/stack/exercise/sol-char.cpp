#include<bits/stdc++.h>
using namespace std;

char Stack[100], ind;

void push(char x) {
    ++ind;
    Stack[ind] = x;
}
bool isEmpty() {
    return ind < 1;
}
void pop() {
    Stack[ind] = '\0';
    --ind;
}
char top() {
    return Stack[ind];
}

bool match(char s1, char s2) {
    return (s1 == '[' && s2 == ']') || (s1 == '(' && s2 == ')') || (s1 == '{' && s2 == '}');
}

int main() {

    char inputArray[4] = {'(','[',']'};

    for (int i=0; i<4; ++i) {
        char c = inputArray[i];
        if ((c == '{') || (c == '[') || (c == '(')) {
            push(c);
        } else {
            char topChar = top();
            if (isEmpty() || !match(topChar, c)) {
                cout << false;
                return false;
            }else {
                 pop();
            }
        }
    }
    cout << isEmpty();
    return isEmpty();
}