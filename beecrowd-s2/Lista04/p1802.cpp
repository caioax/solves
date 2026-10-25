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
    vector<vector<int>> m(5);
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        while (n--) {
            int x;
            cin >> x;
            m[i].push_back(x);
        }
    }

    int c;
    cin >> c;

    vector<int> p;

    for (int i = 0; i < (int)m[0].size(); i++) {
        for (int j = 0; j < (int)m[1].size(); j++) {
            for (int k = 0; k < (int)m[2].size(); k++) {
                for (int l = 0; l < (int)m[3].size(); l++) {
                    for (int h = 0; h < (int)m[4].size(); h++) {
                        int q = m[0][i] + m[1][j] + m[2][k] + m[3][l] + m[4][h];
                        p.push_back(q);
                    }
                }
            }
        }
    }

    QuickSort(p, 0, p.size() - 1);

    int q = 0;
    for (int i = 0; i < c; i++) {
        q += p[p.size() - 1 - i];
    }

    cout << q << "\n";

    return 0;
}
