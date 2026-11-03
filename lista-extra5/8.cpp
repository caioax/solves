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
    lista a, b, r;
    create(&a);
    create(&b);

    cout << "\n";
    drawFont(" Atividade 8");
    cout << "------------------------------------------------\n";

    cout << " •Conjunto A:\n";
    int na[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++) {
        insert(&a, na[i]);
    }
    printList(a);

    cout << " •Conjunto B:\n";
    int nb[5] = {4, 5, 6, 7, 8};
    for (int i = 0; i < 5; i++) {
        insert(&b, nb[i]);
    }
    printList(b);

    cout << "\n";
    cout << " •União (A, B):\n";
    uniao(&a, &b, &r);
    printList(r);

    cout << " •Intersecção (A, B):\n";
    interseccao(&a, &b, &r);
    printList(r);

    cout << " •Diferença (A, B):\n";
    diferenca(&a, &b, &r);
    printList(r);

    cout << "\n";
    cout << " •Pertence (A, 3): " << (pertence(&a, 3) ? "sim" : "não") << "\n";
    cout << " •Pertence (A, 7): " << (pertence(&a, 7) ? "sim" : "não") << "\n";
    cout << "------------------------------------------------\n";

    return 0;
}
