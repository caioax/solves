#include "pilha.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, lixo;

    while (cin >> n && n) {
        vector<char> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        pilha p;
        create(&p);
        int j = 0;
        bool ok = true;
        string mov;

        for (int i = 0; i < n; i++) {
            while ((isEmpty(p) || topo(p) != b[i]) && j < n) {
                push(&p, a[j]);
                j++;
                mov += 'I';
            }
            if (!isEmpty(p) && topo(p) == b[i]) {
                pop(&p, &lixo);
                mov += 'R';
            } else {
                ok = false;
                break;
            }
        }

        while (!isEmpty(p))
            pop(&p, &lixo);

        cout << mov;
        if (!ok)
            cout << " Impossible";
        cout << "\n";
    }
    return 0;
}
