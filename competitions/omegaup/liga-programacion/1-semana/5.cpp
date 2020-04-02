#include <bits/stdc++.h>
using namespace std;

int main() {

    int estaciones[5] = {580, 980, 1190, 1250,1420};
    int rango[2] = {540, 1520};
    int frecuenciaActual;
    cin >> frecuenciaActual;

    int diferencias[5] = {0,0,0,0,0};
    int diferenciasU[5] = {0,0,0,0,0};
    int diferencia = 0;


    for (int i=0; i<5; ++i) {
        diferencia = frecuenciaActual - estaciones[i];
        if (diferencia < 0) {
            diferenciasU[i] = diferencia * -1;
        } else {
            diferenciasU[i] = diferencia;
        }
        diferencias[i] = diferencia;
    }

    int menor = 0;
    for (int i=1; i<5; ++i) {
        if (diferenciasU[i] <= diferenciasU[menor]) {
            menor = i;
        }
    }

    if (frecuenciaActual < rango[0] || frecuenciaActual > rango[1]) {
        cout << "error";
    } else {
        int n = diferencias[menor];
        if (n<0) {
            cout << "adelante " << diferencias[menor]*-1;
        } else {
            cout << "atras " << diferencias[menor];
        }
    }

    return 0;
}