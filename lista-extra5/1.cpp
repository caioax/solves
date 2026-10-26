// Libs feitas por Caio ;)
#include "libs/bigText/font.h"
#include "libs/menu/menu.h"

#include "libs/listaDE/listaDE.h"
#include <bits/stdc++.h>
using namespace std;

void inserirInicio(listaDE *l) {
    cout << "   Inserir no inicio da listaDE\n";
    cout << "------------------------------------\n";
    cout << "   Digite o valo para inserir: ";
    int d;
    cin >> d;
    insertInicio(l, d);
    clear();
    cout << "------------------------------------\n";
    cout << "   Valor " << d << " inserido com sucesso!\n";
    cout << "------------------------------------\n";
    cin.ignore();
    endPag();
}

void inserirFim(listaDE *l) {
    cout << "   Inserir no inicio da listaDE\n";
    cout << "------------------------------------\n";
    cout << "   Digite o valo para inserir: ";
    int d;
    cin >> d;
    insert(l, d);
    clear();
    cout << "------------------------------------\n";
    cout << "   Valor " << d << " inserido com sucesso!\n";
    cout << "------------------------------------\n";
    cin.ignore();
    endPag();
}

void inserirMeio(listaDE *l) {
    int d, i, size;
    contaNos(*l, &size);
    cout << "   Inserir no meio da listaDE pela posição\n";
    cout << "------------------------------------\n";
    cout << "   Digite o valo para inserir: ";
    cin >> d;
    cout << "   Digite a posição para inserir ";
    if (!size)
        cout << "(0): ";
    else
        cout << "(0-" << size << "): ";
    while (cin >> i) {
        if (i < 0 || i > size)
            cout << "   Valor inválido, tente novamente: ";
        else
            break;
    }
    insertMeio(l, i, d);
    clear();
    cout << "------------------------------------\n";
    cout << "   Valor " << d << " inserido com sucesso na posição " << i << ".\n";
    cout << "------------------------------------\n";
    cin.ignore();
    endPag();
}

void retirarInicio(listaDE *l) {
    int d, size;
    contaNos(*l, &size);

    if (!size) {
        cout << "------------------------------------\n";
        cout << "   ListaDE vazia :(\n";
        cout << "------------------------------------\n";
        endPag();
        return;
    }
    removerInicio(l, d);
    clear();
    cout << "------------------------------------\n";
    cout << "   Valor " << d << " removido com sucesso\n";
    cout << "------------------------------------\n";
    endPag();
}

void retirarFim(listaDE *l) {
    int d, size;
    contaNos(*l, &size);

    if (!size) {
        cout << "------------------------------------\n";
        cout << "   ListaDE vazia :(\n";
        cout << "------------------------------------\n";
        endPag();
        return;
    }
    removerFim(l, d);
    clear();
    cout << "------------------------------------\n";
    cout << "   Valor " << d << " removido com sucesso\n";
    cout << "------------------------------------\n";
    endPag();
}

void retirarMeio(listaDE *l) {
    int d, i, size;
    contaNos(*l, &size);

    if (!size) {
        cout << "------------------------------------\n";
        cout << "   ListaDE vazia :(\n";
        cout << "------------------------------------\n";
        endPag();
        return;
    }

    size--;
    cout << "   Retirar no meio da listaDE pela posição\n";
    cout << "------------------------------------\n";
    cout << "   Digite a posição para retirar ";
    if (size < 1)
        cout << "(0): ";
    else
        cout << "(0-" << size << "): ";
    while (cin >> i) {
        if (i < 0 || i > size)
            cout << "   Valor inválido, tente novamente: ";
        else
            break;
    }
    removerMeio(l, i, d);
    clear();
    cout << "------------------------------------\n";
    cout << "   Valor " << d << " removido com sucesso na posição " << i << ".\n";
    cout << "------------------------------------\n";
    cin.ignore();
    endPag();
}

void imprimeTudo(listaDE l) {
    cout << "------------------------------------\n";
    if (isEmpty(l)) {
        cout << "   listaDE vazia :(\n";
    } else {
        cout << "   Todos os itens da listaDE\n";
        cout << "   {";
        imprime(l, 'i');
        cout << "}\n";
    }
    cout << "------------------------------------\n";
    endPag();
}

void buscar(listaDE *l) {
    cout << "------------------------------------\n";
    cout << "   Digite o valor para buscar: ";
    int d, i;
    cin >> d;
    busca(l, d, i);
    cout << "\n------------------------------------\n";

    if (i == -1) {
        cout << "   Valor " << d << " não foi encontrado :(\n";
    } else {
        cout << "   Valor " << d << " encontrado na posição " << i << "\n";
    }
    cout << "------------------------------------\n";
    cin.ignore();
    endPag();
}

int main() {
    listaDE l;
    create(&l);

    Menu menu;
    menu.options = {
        {"Inserir no inicio", [&]() { inserirInicio(&l); }},
        {"Inserir no meio", [&]() { inserirMeio(&l); }},
        {"Inserir no fim\n\n •Retirar:", [&]() { inserirFim(&l); }},
        //
        {"Retira no inicio", [&]() { retirarInicio(&l); }},
        {"Retira no meio", [&]() { retirarMeio(&l); }},
        {"Retira no fim\n\n •Outros:", [&]() { retirarFim(&l); }},
        //
        {"Busca", [&]() { buscar(&l); }},
        {"Imprime tudo", [&]() { imprimeTudo(l); }},
        {"Sair", nullptr},
    };

    menu.header = []() {
        cout << "\n";
        drawFont(" Lista :)");
        cout << "------------------------------------\n";
        cout << "\n •Inserir:\n";
    };

    menu.footer = [&]() {
        cout << "\n------------------------------------\n";
        cout << "   Lista atual:\n   ";
        if (!isEmpty(l)) {
            cout << "{";
            imprime(l, 'i');
            cout << "}\n";
        } else {
            cout << "{empty}\n";
        }
    };

    drawMenu(menu);
    return 0;
}
