#include "fila.h"
#include <bits/stdc++.h>
using namespace std;

bool chega(int n, int m) {
    if (n >= 49)
        return true;

    vector<vector<bool>> vis(n + 1, vector<bool>(n + 1, false));
    fila f;
    create(&f);
    insert(&f, 1 * 100 + 1);
    vis[1][1] = true;

    while (!isEmpty(f)) {
        int e;
        remove(&f, &e);
        int pos = e / 100, i = e % 100;

        if (pos == m) {
            while (!isEmpty(f))
                remove(&f, &e);
            return true;
        }

        int salto = 2 * (i + 1) - 1;
        int prox[2] = {pos + salto, pos - salto};
        for (int p : prox) {
            if (p >= 1 && p <= n && i + 1 <= n && !vis[p][i + 1]) {
                vis[p][i + 1] = true;
                insert(&f, p * 100 + i + 1);
            }
        }
    }
    return false;
}

int main() {
    int n, m;

    while (cin >> n >> m && (n || m)) {
        if (chega(n, m)) {
            cout << "Let me try!\n";
        } else {
            cout << "Don't make fun of me!\n";
        }
    }
    return 0;
}
