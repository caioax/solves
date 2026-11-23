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

// Submenu: só uma função que cria e desenha um novo menu
void settingsMenu(string &name) {
    Menu menu;
    menu.options = {
        {"Mudar nome", [&] { changeName(name); }},
        {"Mostrar nome", [&] { greet(name); }},
        {"Voltar", nullptr},
    };
    drawMenu(menu);
}

int main() {
    string name = "Visitante";

    // Cria um novo menu
    Menu menu;
    // Passa um cabeçalho para customização
    menu.header = []() {
        cout << "   Menu de exemplo\n";
        cout << "-------------------------\n";
    };
    // Passa as opções e a função que cada uma irá executar ao ser selecionada
    menu.options = {
        {"Primeira opção", firstOption},                // sem parâmetros: direto
        {"Opção livre", doNothing},                     // opção que não faz nada
        {"Somar 2 + 3", [] { sum(2, 3); }},             // com parâmetros: lambda
        {"Configurações", [&] { settingsMenu(name); }}, // [&] para usar variáveis daqui
        {"Sair", nullptr},                              // nullptr encerra o menu
    };
    // passa um rodapé para customização
    menu.footer = []() {
        cout << "-------------------------\n";
        cout << "   Feio por Caio :D\n";
    };

    // Função que desenha o menu na tela
    drawMenu(menu);
    return 0;
}
