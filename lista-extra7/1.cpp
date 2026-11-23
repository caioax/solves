#include "libs/arvoreBinaria/arvoreBinaria.h"
#include <bits/stdc++.h>
using namespace std;

// a)
void contaNos(Arvore t, int &n) {
    if (t != NULL) {
        contaNos(t->esq, n);
        contaNos(t->dir, n);
        n++;
    }
}

// b)
void contaFolhas(Arvore t, int &n) {
    if (t != NULL) {
        contaFolhas(t->esq, n);
        contaFolhas(t->dir, n);
        if (t->esq == NULL && t->dir == NULL)
            n++;
    }
}

// c)
void filhosDireita(Arvore t, int &n) {
    if (t != NULL) {
        filhosDireita(t->esq, n);
        filhosDireita(t->dir, n);
        if (t->dir != NULL)
            n++;
    }
}

int main() {
    Arvore A = NULL;

    cout << "Digite o input da arvore: ";
    string s;
    cin >> s;

    for (char c : s) {
        insertNode(&A, c);
    }

    cout << "Pré-Ordem\n";
    preOrder(A);

    cout << "\n\nIn-Ordem\n";
    inOrder(A);

    cout << "\n\nPós-Ordem\n";
    posOrder(A);

    cout << "\n\nQuantidade de nós\n";
    int quantidadeNos = 0;
    contaNos(A, quantidadeNos);
    cout << quantidadeNos << "\n";

    cout << "\n\nQuantidade de folhas\n";
    int quantidadeFolhas = 0;
    contaFolhas(A, quantidadeFolhas);
    cout << quantidadeFolhas << "\n";

    cout << "\n\nQuantidade de filhos a direita\n";
    int quantidadeDeFilhossADireita = 0;
    filhosDireita(A, quantidadeDeFilhossADireita);
    cout << quantidadeDeFilhossADireita << "\n";

    return 0;
}
