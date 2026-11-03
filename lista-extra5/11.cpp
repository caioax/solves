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
    drawFont(" Atividade 11");
    cout << "------------------------------------------------\n";

    cout << " •l1 contém os numeros de (1 - 5):\n";
    for (int i = 1; i <= 5; i++) {
        insert(&l1, i);
    }
    printList(l1);

    cout << " •l2 contém os numeros de (6 - 10):\n";
    for (int i = 6; i <= 10; i++) {
        insert(&l2, i);
    }
    printList(l2);

    cout << "\n";
    cout << " •Concatenando ambos:\n";
    concatenar(&l1, &l2);
    printList(l1);

    cout << " •Imprimindo de trás para frente:\n";
    cout << "   {";
    imprime(l1, 'f');
    cout << "}\n";
    cout << "------------------------------------------------\n";

    return 0;
}
