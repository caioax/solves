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
    listaDE l;
    create(&l);

    cout << "\n";
    drawFont(" Atividade 10");
    cout << "------------------------------------------------\n";

    cout << " •Inserindo os numeros de (1 - 10):\n";
    for (int i = 1; i <= 10; i++) {
        insert(&l, i);
    }
    printList(l);

    cout << " •Imprimindo de trás para frente:\n";
    cout << "   {";
    imprime(l, 'f');
    cout << "}\n";

    int n;
    contaNos(l, &n);
    cout << "\n";
    cout << " •Contagem: a lista possui " << n << " elementos.\n";

    int i;
    busca(&l, 7, i);
    cout << " •Busca: o número 7 está na posição " << i << ".\n";

    cout << "\n";
    cout << " •Eliminando o número 7:\n";
    remover(&l, 7);
    printList(l);
    contaNos(l, &n);
    cout << " •Contagem: a lista agora possui " << n << " elementos.\n";
    cout << "------------------------------------------------\n";

    return 0;
}
