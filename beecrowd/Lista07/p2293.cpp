// problem: 2293 - Campo de Minhocas

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> linhas(n, 0);
    vector<int> colunas(m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            linhas[i] += x;
            colunas[j] += x;
        }
    }

    sort(linhas.rbegin(), linhas.rend());
    sort(colunas.rbegin(), colunas.rend());

    cout << max(linhas[0], colunas[0]) << "\n";

    return 0;
}
