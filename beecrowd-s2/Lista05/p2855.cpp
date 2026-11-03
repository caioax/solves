#include <bits/stdc++.h>
using namespace std;

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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    while (cin >> n) {
        vector<int> seq(n);
        for (int i = 0; i < n; i++) {
            cin >> seq[i];
        }
        int m;
        cin >> m;

        int pos = BinarySearch(seq, m, 0, n - 1);
        bool sorte = pos != -1;
        pos++;

        for (int k = 2; sorte && pos >= k; k++) {
            if (pos % k == 0) {
                sorte = false;
            } else {
                pos -= pos / k;
            }
        }

        if (sorte) {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }

    return 0;
}
