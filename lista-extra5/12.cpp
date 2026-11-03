// Libs feitas por Caio ;)
#include "libs/bigText/font.h"
#include "libs/menu/menu.h"

#include "libs/listaDE/listaDE.h"
#include <bits/stdc++.h>
using namespace std;

void subir(struct no **atual) {
    cout << "   Direção: subindo ▲\n";
    cout << "------------------------------------\n";
    if ((*atual)->prox == NULL) {
        cout << "   Já está no último andar :(\n";
        cout << "------------------------------------\n";
        endPag();
        return;
    }
    cout << "   Pode ir para os andares (" << (*atual)->prox->dado << "-10): ";
    int a;
    while (cin >> a) {
        if (a <= (*atual)->dado || a > 10)
            cout << "   Andar inválido, tente novamente: ";
        else
            break;
    }
    cout << "\n";
    while ((*atual)->dado != a) {
        *atual = (*atual)->prox;
        cout << "   ▲ Andar " << (*atual)->dado << "\n";
    }
    cout << "------------------------------------\n";
    cout << "   Chegou no andar " << a << "!\n";
    cout << "------------------------------------\n";
    cin.ignore();
    endPag();
}

void descer(struct no **atual) {
    cout << "   Direção: descendo ▼\n";
    cout << "------------------------------------\n";
    if ((*atual)->ant == NULL) {
        cout << "   Já está no primeiro andar :(\n";
        cout << "------------------------------------\n";
        endPag();
        return;
    }
    cout << "   Pode ir para os andares (1-" << (*atual)->ant->dado << "): ";
    int a;
    while (cin >> a) {
        if (a >= (*atual)->dado || a < 1)
            cout << "   Andar inválido, tente novamente: ";
        else
            break;
    }
    cout << "\n";
    while ((*atual)->dado != a) {
        *atual = (*atual)->ant;
        cout << "   ▼ Andar " << (*atual)->dado << "\n";
    }
    cout << "------------------------------------\n";
    cout << "   Chegou no andar " << a << "!\n";
    cout << "------------------------------------\n";
    cin.ignore();
    endPag();
}

int main() {
    listaDE predio;
    create(&predio);
    for (int i = 1; i <= 10; i++) {
        insert(&predio, i);
    }
    struct no *atual = predio.inicio;

    Menu menu;
    menu.options = {
        {"Subir", [&]() { subir(&atual); }},
        {"Descer", [&]() { descer(&atual); }},
        {"Sair", nullptr},
    };

    menu.header = []() {
        cout << "\n";
        drawFont(" Elevador");
        cout << "------------------------------------\n\n";
    };

    menu.footer = [&]() {
        cout << "\n------------------------------------\n";
        cout << "   Andar atual: " << atual->dado << "\n";
    };

    drawMenu(menu);
    return 0;
}
