#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>::iterator vet, int tam) {
    int mid;
    int i, j, k;
    vector<int> tmp(tam);
    mid = tam / 2;
    i = 0;
    j = mid;
    k = 0;
    while (i < mid && j < tam) {
        if (vet[i] <= vet[j]) {
            tmp[k] = vet[i++];
        } else {
            tmp[k] = vet[j++];
        }
        ++k;
    }
    if (i == mid) {
        while (j < tam) {
            tmp[k++] = vet[j++];
        }
    } else {
        while (i < mid) {
            tmp[k++] = vet[i++];
        }
    }
    for (i = 0; i < tam; ++i) {
        vet[i] = tmp[i];
    }
}

void MergeSort(vector<int>::iterator vet, int tam) {
    int mid;
    if (tam > 1) {
        mid = tam / 2;
        MergeSort(vet, mid);
        MergeSort(vet + mid, tam - mid);
        merge(vet, tam);
    }
}

int main() {
    int p;
    cin >> p;

    while (p--) {
        vector<vector<int>> ns(2);
        int n, r = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ns[(int)(x < 0)].push_back(abs(x));
        }

        MergeSort(ns[0].begin(), ns[0].size());
        MergeSort(ns[1].begin(), ns[1].size());

        for (int i = 0; i < 2; i++) {
            int v = i, s = 0, last = 0;
            vector<int> ps(2, 0);

            while (ps[v] < (int)ns[v].size()) {
                if (ns[v][ps[v]] > last) {
                    last = ns[v][ps[v]];
                    v = !v;
                    s++;
                    r = max(r, s);
                } else {
                    ps[v]++;
                }
            }
        }

        cout << r << "\n";
    }
    return 0;
}
