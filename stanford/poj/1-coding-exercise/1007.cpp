#include<iostream>
#include<map>
using namespace std;

int main () {

    int n, m; 
    cin >> n >> m;
    char dnaSequence[51][51];
    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < n; j++)
            cin >> dnaSequence[i][j];
    }

    map<int, int > sortedDNASequence;    
    int numberOfInversions = 0;
    int mul = 1;
    int times = 0;
    for (int i = 0; i < m ; i++) {
        for (int j = 1; j < n; j++) {
            char a = dnaSequence[i][j-1];
            char b = dnaSequence[i][j];
            if (a == b) {
                mul += 1;
            } else {
                if (a > 'A') {
                    for (int k = j; k < n; k++) {
                       if (a > dnaSequence[i][k]) {
                            times += 1;                        
                        }
                    }   
                    numberOfInversions += (mul*times);
                    times = 0;
                }
                mul = 1;
            }
        }
        sortedDNASequence.insert(make_pair(numberOfInversions, i));
        numberOfInversions = 0;
        mul = 1;
        times = 0;
    }
    multimap<int, int> :: iterator it;
    for (it = sortedDNASequence.begin(); it != sortedDNASequence.end(); it++)
    {
        for(int i = 0; i < n; i++) {
            cout << dnaSequence[(*it).second][i] << "";
        }
        //cout << "->" << (*it).first << "|" << (*it).second << "\n";
        cout << "\n";
    }

    return 0;
}