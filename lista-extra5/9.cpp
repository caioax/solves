// Libs feitas por Caio ;)
#include "libs/bigText/font.h"

#include "libs/lista/lista.h"
#include <bits/stdc++.h>
using namespace std;

void printPoli(polinomio &p) {
    cout << "   p(x) = ";
    imprimePoli(p);
    cout << "\n";
}

void lerPoli(polinomio *p) {
    int n, e;
    float c;
    createPoli(p);
    cout << "   Quantidade de termos: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "   Termo " << i + 1 << " (coeficiente expoente): ";
        cin >> c >> e;
        insertTermo(p, c, e);
    }
}

int main() {
    polinomio p1, p2, r;

    cout << "\n";
    drawFont(" Atividade 9");
    cout << "------------------------------------------------\n";

    cout << " •Lendo o primeiro polinômio:\n";
    lerPoli(&p1);
    cout << "\n";
    cout << " •Lendo o segundo polinômio:\n";
    lerPoli(&p2);

    cout << "------------------------------------------------\n";
    cout << " •Primeiro polinômio:\n";
    printPoli(p1);
    cout << " •Segundo polinômio:\n";
    printPoli(p2);

    cout << "\n";
    cout << " •Soma:\n";
    somarPoli(&p1, &p2, &r);
    printPoli(r);

    cout << " •Multiplicação:\n";
    multiplicarPoli(&p1, &p2, &r);
    printPoli(r);

    cout << " •Derivada do primeiro:\n";
    derivarPoli(&p1, &r);
    printPoli(r);

    cout << " •Derivada do segundo:\n";
    derivarPoli(&p2, &r);
    printPoli(r);
    cout << "------------------------------------------------\n";

    return 0;
}
