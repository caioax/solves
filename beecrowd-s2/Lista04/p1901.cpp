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

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    int c = n * 2;
    vector<int> cords(c);

    for (int i = 0; i < c; i++) {
        int x, y;
        cin >> x >> y;

        cords[i] = matriz[x - 1][y - 1];
    }

    QuickSort(cords, 0, c - 1);

    int q = 1;
    for (int i = 1; i < c; i++) {
        if (cords[i - 1] != cords[i])
            q++;
    }

    cout << q << "\n";
    return 0;
}
