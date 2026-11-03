#include "fila.h"
#include <bits/stdc++.h>
using namespace std;

int inverte(int x) {
    int r = 0;
    while (x > 0) {
        r = r * 10 + x % 10;
        x /= 10;
    }
    return r;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        vector<int> dist(100000, -1);
        fila f;
        create(&f);
        insert(&f, a);
        dist[a] = 0;

        while (!isEmpty(f)) {
            int x;
            remove(&f, &x);
            if (x == b)
                break;

            int prox[2] = {x + 1, inverte(x)};
            for (int p : prox) {
                if (p < 100000 && dist[p] == -1) {
                    dist[p] = dist[x] + 1;
                    insert(&f, p);
                }
            }
        }

        int lixo;
        while (!isEmpty(f))
            remove(&f, &lixo);

        cout << dist[b] << "\n";
    }
    return 0;
}
