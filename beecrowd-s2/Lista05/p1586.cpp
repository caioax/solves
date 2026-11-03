#include <bits/stdc++.h>
using namespace std;

vector<long long> S, T;
int n;

long long Diferenca(int k) {
    long long a = (k + 1) * S[k] - T[k];
    long long b = (T[n] - T[k]) - k * (S[n] - S[k]);
    return a - b;
}

int BinarySearch(int inic, int fim) {
    if (inic > fim)
        return -1;

    int meio = inic + (fim - inic) / 2;
    long long d = Diferenca(meio);

    if (d == 0)
        return meio;

    if (d > 0)
        return BinarySearch(inic, meio - 1);
    else
        return BinarySearch(meio + 1, fim);
}

int main() {
    while (cin >> n && n) {
        vector<string> nomes(n + 1);
        S.assign(n + 1, 0);
        T.assign(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> nomes[i];
            long long forca = 0;
            for (char c : nomes[i]) {
                forca += c;
            }
            S[i] = S[i - 1] + forca;
            T[i] = T[i - 1] + i * forca;
        }

        int k = BinarySearch(1, n);

        if (k == -1) {
            cout << "Impossibilidade de empate.\n";
        } else {
            cout << nomes[k] << "\n";
        }
    }

    return 0;
}
