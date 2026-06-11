// problem: 2163 - O Despertar da Força

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matriz[n][m];
    vector<pair<int, int>> lista;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
            if (!i || !j || i == n - 1 || j == m - 1) continue;
            if (matriz[i][j] == 42) lista.push_back({i, j});
        }
    }

    int rx = 0, ry = 0;
    for (auto [i, j] : lista) {
        bool fail = false;
        for (int x = i - 1; x <= i + 1; x++) {
            for (int y = j - 1; y <= j + 1; y++) {
                if (x == i && y == j) continue;
                if (matriz[x][y] != 7) {
                    fail = true;
                    break;
                }
            }
            if (fail) break;
        }
        if (fail) continue;

        rx = i + 1;
        ry = j + 1;
        break;
    }

    cout << rx << ' ' << ry << "\n";

    return 0;
}
