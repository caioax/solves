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
    int t;
    cin >> t;

    while (t--) {
        int n, q = 1;
        cin >> n;
        vector<int> vet(n);
        for (int i = 0; i < n; i++) {
            cin >> vet[i];
        }
        QuickSort(vet, 0, n - 1);
        for (int i = 1; i < n; i++) {
            if (vet[i - 1] != vet[i]) q++;
        }
        cout << q << "\n";
    }

    return 0;
}
