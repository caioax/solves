// Libs feitas por Caio ;)
#include "libs/bigText/font.h"

#include "libs/lista/lista.h"
#include <bits/stdc++.h>
using namespace std;

void printList(lista &l) {
    cout << "   {";
    imprime(l);
    cout << "}\n";
}

int main() {
    lista l;
    create(&l);

    cout << "\n";
    drawFont(" Atividade 3");
    cout << "------------------------------------------------\n";

    cout << " •l contém os numeros de (1 - 10):\n";
    for (int i = 1; i <= 10; i++) {
        insert(&l, i);
    }
    printList(l);

    cout << "\n";
    cout << " •Após inverter:\n";
    inverter(&l);
    printList(l);
    cout << "------------------------------------------------\n";

    return 0;
}
