#include<iostream>
#include<string>
using namespace std; 

const int NUM_LETTERS = 26;
const int NUM_STRINGS = 4;

int letters[NUM_LETTERS];
string strings[NUM_STRINGS];
int numLetter, pos;

int main () {

    for (int i = 0; i < NUM_LETTERS ; i++) 
        letters[i] = 0;

    for (int i = 0; i < NUM_STRINGS; i++)
        getline(cin, strings[i]);
    
    int max = 0;
    int maxPos = 0;
    for (int i = 0; i < NUM_STRINGS; i++) {
        for (int j = 0; j < strings[i].length(); j++) {
            numLetter = int(strings[i][j]);
            if (numLetter >= 65 && numLetter <= 90) {
                pos = numLetter - 65;
                letters[pos] += 1;
                if (letters[pos] > max) {
                    max = letters[pos];
                    maxPos = pos;
                }
            }
        }        
    }
    
    for (int j = max; j > 0; j--) {
        for (int i = 0; i < NUM_LETTERS; i++) {
            if (letters[i] >= j) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    for (int i = 0; i < NUM_LETTERS; i++) {
        cout << char(i + 65) << " ";
    }
    
    return 0;
}