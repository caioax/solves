#include <bits/stdc++.h>
using namespace std;

struct Camiseta {
    string nome;
    string cor;
    string tamanho;
};

bool Decision(Camiseta a, Camiseta b) {
    if (a.cor < b.cor) {
        return true;
    } else if (a.cor > b.cor) {
        return false;
    }

    if (a.tamanho > b.tamanho) {
        return true;
    } else if (a.tamanho < b.tamanho) {
        return false;
    }

    return a.nome < b.nome;
}

void QuickSort(vector<Camiseta> &vet, int esq, int dir) {
    int i = esq;
    int j = dir;
    Camiseta x, y;
    x = vet[(esq + dir) / 2];

    do {
        while (Decision(vet[i], x) && (i < dir)) {
            i++;
        }
        while (Decision(x, vet[j]) && (j > esq)) {
            j--;
        }
        if (i <= j) {
            y = vet[i];
            vet[i] = vet[j];
            vet[j] = y;
            i++;
            j--;
        }
    } while (i <= j);

    if (esq < j) {
        QuickSort(vet, esq, j);
    }
    if (i < dir) {
        QuickSort(vet, i, dir);
    }
}

int main() {
    int n;
    bool first = true;
    while (cin >> n && n) {
        if (!first)
            cout << "\n";
        first = false;

        vector<Camiseta> c(n);
        for (int i = 0; i < n; i++) {
            string nome, cor, tamanho;
            cin.ignore();
            getline(cin, nome);
            cin >> cor >> tamanho;
            c[i] = {nome, cor, tamanho};
        }
        QuickSort(c, 0, n - 1);

        for (int i = 0; i < n; i++) {
            cout << c[i].cor << ' ' << c[i].tamanho << ' ' << c[i].nome << "\n";
        }
    }
    return 0;
}
