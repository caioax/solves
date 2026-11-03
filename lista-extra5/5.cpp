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
    drawFont(" Atividade 5");
    cout << "------------------------------------------------\n";

    cout << " •l contém os numeros:\n";
    int ns[10] = {1, 2, 2, 3, 4, 2, 2, 5, 6, 2};
    for (int i = 0; i < 10; i++) {
        insert(&l, ns[i]);
    }
    printList(l);
    cout << "\n";
    cout << "Removendo todas as aparições do número 2:\n";
    removerTodos(&l, 2);
    printList(l);
    cout << "------------------------------------------------\n";

    return 0;
}
