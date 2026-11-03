// Libs feitas por Caio ;)
#include "libs/bigText/font.h"

#include "libs/lista/lista.h"
#include <bits/stdc++.h>
using namespace std;

void printList(lista &l) {
    cout << "   {";
    imprimeRecursivo(l.inicio);
    cout << "}\n";
}

int main() {
    lista l;
    create(&l);

    cout << "\n";
    drawFont(" Atividade 4");
    cout << "------------------------------------------------\n";

    cout << " •l contém os numeros de (1 - 10):\n";
    for (int i = 1; i <= 10; i++) {
        insert(&l, i);
    }
    cout << " •Imprimindo usando a função recursiva:\n";
    printList(l);
    cout << "------------------------------------------------\n";

    return 0;
}
