#include "fila.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int o, d, k;
    const int LIM = 100000;

    while (cin >> o >> d >> k && (o || d || k)) {
        vector<int> dist(LIM + 1, -1);
        vector<bool> proibido(LIM + 1, false);
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            proibido[x] = true;
        }

        fila f;
        create(&f);
        insert(&f, o);
        dist[o] = 0;

        while (!isEmpty(f)) {
            int x;
            remove(&f, &x);
            if (x == d)
                break;

            int prox[5] = {x + 1, x - 1, x * 2, x * 3, x % 2 == 0 ? x / 2 : -1};
            for (int p : prox) {
                if (p >= 1 && p <= LIM && !proibido[p] && dist[p] == -1) {
                    dist[p] = dist[x] + 1;
                    insert(&f, p);
                }
            }
        }

        int lixo;
        while (!isEmpty(f))
            remove(&f, &lixo);

        cout << dist[d] << "\n";
    }
    return 0;
}
