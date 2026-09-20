#include <bits/stdc++.h>
using namespace std;

void QuickSort(vector<int>& vet, int esq, int dir) {
    int i = esq;
    int j = dir;
    int x;
    int y;
    x = vet[(esq + dir) / 2];

    do {
        while ((vet[i] < x) && (i < dir)) {
            i++;
        }
        while ((x < vet[j]) && (j > esq)) {
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
    vector<int> pares, impares;

    while (n--) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            pares.push_back(x);
        } else {
            impares.push_back(-x);
        }
    }

    QuickSort(pares, 0, pares.size() - 1);
    QuickSort(impares, 0, impares.size() - 1);

    for (int i = 0; i < (int)pares.size(); i++) {
        cout << pares[i] << "\n";
    }
    for (int i = 0; i < (int)impares.size(); i++) {
        cout << -impares[i] << "\n";
    }

    return 0;
}
