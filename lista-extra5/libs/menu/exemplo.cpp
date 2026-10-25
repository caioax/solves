// Código exemplo do uso da minha lib de menu :D
#include "menu.h"
#include <bits/stdc++.h>
using namespace std;

void firstOption() {
    cout << "Primeira opção selecionada!\n";
    endPag(); // pausa até apertar Enter
}

void sum(int a, int b) {
    cout << a << " + " << b << " = " << a + b << "\n";
    endPag();
}

void greet(string &name) {
    cout << "Nome: " << name << "!\n";
    endPag();
}

void changeName(string &name) {
    cout << "Novo nome: ";
    cin >> name;
    cout << "\nNome atualizado para " << name << "\n";

    // Use cin.ignore() quando houber cin >> ... na função
    // para limpar o bufer e permitir que o endPag() funcione corretamente
    cin.ignore();
    endPag();
}

// Submenu: só uma função que chama drawMenu de novo
void settingsMenu(string &name) {
    drawMenu({
        {"Mudar nome", [&] { changeName(name); }},
        {"Mostrar nome", [&] { greet(name); }},
        {"Voltar", nullptr},
    });
}

int main() {
    string name = "Visitante";

    drawMenu({
        {"Primeira opção", firstOption},                // sem parâmetros: direto
        {"Opção livre", doNothing},                     // opção que não faz nada
        {"Somar 2 + 3", [] { sum(2, 3); }},             // com parâmetros: lambda
        {"Configurações", [&] { settingsMenu(name); }}, // [&] para usar variáveis daqui
        {"Sair", nullptr},                              // nullptr encerra o menu
    });
    return 0;
}
