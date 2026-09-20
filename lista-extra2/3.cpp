#include <bits/stdc++.h>
#include <conio.h>

#include <iostream>

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
    char frase[31];
    char palavra[31];
    int tam = 0;
    char c;

    cout << "Digite uma frase (max 30 caracteres, ENTER finaliza):\n";

    while (tam < 30) {
        c = getch();
        if (c == '\r' || c == '\n') break;
        cout << c << flush;
        frase[tam] = c;
        tam++;
    }

    cout << "\n\nPalavras encontradas:\n";

    int pos = 0;
    while (pos < tam) {
        int copiados = COPIA_PALAVRA(frase + pos, palavra, tam - pos);

        if (copiados > 0) {
            cout << palavra << endl;
        }

        pos += copiados + 1;
    }

    return 0;
}
