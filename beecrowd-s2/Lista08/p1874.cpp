#include "fila.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, p, n;

    while (cin >> h >> p >> n && (h || p || n)) {
        vector<vector<int>> m(h, vector<int>(p));
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < p; j++) {
                cin >> m[i][j];
            }
        }

        fila f;
        create(&f);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            insert(&f, x);
        }

        for (int j = p - 1; j >= 0 && !isEmpty(f); j--) {
            for (int i = h - 1; i >= 0 && !isEmpty(f); i--) {
                if (m[i][j] == 0) {
                    int x;
                    remove(&f, &x);
                    m[i][j] = x;
                }
            }
        }

        int lixo;
        while (!isEmpty(f))
            remove(&f, &lixo);

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < p; j++) {
                if (j)
                    cout << ' ';
                cout << m[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
