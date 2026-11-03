#include "fila.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    const int LIM = 200000;

    while (cin >> n >> m) {
        vector<int> dist(2 * LIM + 1, -1);
        fila f;
        create(&f);
        insert(&f, n);
        dist[n + LIM] = 0;

        while (!isEmpty(f)) {
            int x;
            remove(&f, &x);
            if (x == m)
                break;

            int prox[6] = {x * 2, x * 3, x / 2, x / 3, x + 7, x - 7};
            for (int p : prox) {
                if (p >= -LIM && p <= LIM && dist[p + LIM] == -1) {
                    dist[p + LIM] = dist[x + LIM] + 1;
                    insert(&f, p);
                }
            }
        }

        int lixo;
        while (!isEmpty(f))
            remove(&f, &lixo);

        cout << dist[m + LIM] << "\n";
    }
    return 0;
}
