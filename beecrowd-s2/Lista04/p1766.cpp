#include <bits/stdc++.h>
using namespace std;

struct Rena {
    string nome;
    int peso;
    int idade;
    double altura;
};

bool Decision(Rena a, Rena b) {
    if (a.peso > b.peso) {
        return true;
    } else if (a.peso < b.peso) {
        return false;
    }

    if (a.idade < b.idade) {
        return true;
    } else if (a.idade > b.idade) {
        return false;
    }

    if (a.altura < b.altura) {
        return true;
    } else if (a.altura > b.altura) {
        return false;
    }

    return a.nome < b.nome;
}

void QuickSort(vector<Rena> &vet, int esq, int dir) {
    int i = esq;
    int j = dir;
    Rena x, y;
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
    cin >> n;
    for (int c = 1; c <= n; c++) {
        int t, r;
        cin >> t >> r;
        vector<Rena> renas(t);

        for (int i = 0; i < t; i++) {
            string nome;
            int peso, idade;
            double altura;

            cin >> nome >> peso >> idade >> altura;
            Rena rena = {nome, peso, idade, altura};
            renas[i] = rena;
        }

        QuickSort(renas, 0, t - 1);

        cout << "CENARIO {" << c << "}\n";
        for (int i = 0; i < r; i++) {
            cout << i + 1 << " - " << renas[i].nome << "\n";
        }
    }

    return 0;
}
