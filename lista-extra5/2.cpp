// Libs feitas por Caio ;)
#include "libs/bigText/font.h"

#include "libs/listaDE/listaDE.h"
#include <bits/stdc++.h>
using namespace std;

void printList(listaDE &l) {
    cout << "   {";
    imprime(l, 'i');
    cout << "}\n";
}

int main() {
    listaDE l1, l2;
    create(&l1);
    create(&l2);

    cout << "\n";
    drawFont(" Atividade 2");
    cout << "------------------------------------------------\n";

    cout << " •l1 contém os pares de (0 - 10):\n";
    for (int i = 0; i < 10; i += 2) {
        insert(&l1, i);
    }
    printList(l1);

    cout << "\n";
    cout << " •l2 contém os impares de (11 - 21):\n";
    for (int i = 11; i < 21; i += 2) {
        insert(&l2, i);
    }
    printList(l2);

    cout << "\n";
    cout << " •Concatenando ambos: \n";
    concatenar(&l1, &l2);
    printList(l1);
    cout << "------------------------------------------------\n";

    return 0;
}
