#include <bits/stdc++.h>
using namespace std;

void QuickSort(vector<int> &vet, int esq, int dir) {
    int i = esq;
    int j = dir;
    int x, y;
    x = vet[(esq + dir) / 2];

    do {
        while (vet[i] < x && (i < dir)) {
            i++;
        }
        while (x < vet[j] && (j > esq)) {
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

int BinarySearch(vector<int> &vet, int dado, int inic, int fim) {
    if (inic > fim)
        return -1;

    int meio = inic + (fim - inic) / 2;

    if (vet[meio] == dado)
        return meio;

    if (dado < vet[meio])
        return BinarySearch(vet, dado, inic, meio - 1);
    else
        return BinarySearch(vet, dado, meio + 1, fim);
}

int main() {
    int n, q, c = 1;

    while (cin >> n >> q && n && q) {
        vector<int> lista(n);

        for (int i = 0; i < n; i++) {
            cin >> lista[i];
        }
        QuickSort(lista, 0, n - 1);

        cout << "CASE# " << c << ":\n";
        for (int i = 0; i < q; i++) {
            int p;
            cin >> p;

            int indice = BinarySearch(lista, p, 0, n - 1);

            if (indice == -1) {
                cout << p << " not found\n";
                continue;
            }

            int menorIndice = indice;

            while (indice != -1) {
                indice = BinarySearch(lista, p, 0, indice - 1);
                if (indice != -1)
                    menorIndice = min(indice, menorIndice);
            }

            cout << p << " found at " << menorIndice + 1 << "\n";
        }
        c++;
    }

    return 0;
}
