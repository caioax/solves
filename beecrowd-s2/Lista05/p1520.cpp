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
    int n;
    while (cin >> n) {
        vector<int> lotes;
        while (n--) {
            int x, y;
            cin >> x >> y;
            for (int i = x; i <= y; i++) {
                lotes.push_back(i);
            }
        }
        int num;
        cin >> num;

        QuickSort(lotes, 0, (int)lotes.size() - 1);

        int i = BinarySearch(lotes, num, 0, (int)lotes.size() - 1);

        if (i == -1) {
            cout << num << " not found\n";
            continue;
        }

        int inicio, fim;
        for (int r = i; r >= 0; r--) {
            if (r - 1 < 0 || lotes[r - 1] != num) {
                inicio = r;
                break;
            }
        }
        for (int a = i; a < (int)lotes.size(); a++) {
            if (a + 1 >= (int)lotes.size() || lotes[a + 1] != num) {
                fim = a;
                break;
            }
        }

        cout << num << " found from " << inicio << " to " << fim << "\n";
    }

    return 0;
}
