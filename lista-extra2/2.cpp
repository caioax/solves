#include <bits/stdc++.h>
using namespace std;

int COPIA_PALAVRA(char* origem, char* destino, int tam) {
    int qtd = 0;

    while (qtd < tam && origem[qtd] != ' ') {
        destino[qtd] = origem[qtd];
        qtd++;
    }

    destino[qtd] = '\0';

    return qtd;
}

int main() {
    char frase[] = "Programacao em C++";
    char palavra[100];
    int copiados;

    copiados = COPIA_PALAVRA(frase, palavra, 18);
    cout << "Origem : \"" << frase << "\"" << "\n";
    cout << "Destino: \"" << palavra << "\"" << "\n";
    cout << "Copiados: " << copiados << "\n";

    return 0;
}
