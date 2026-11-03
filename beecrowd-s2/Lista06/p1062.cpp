#include "pilha.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, lixo;

    while (cin >> n && n) {
        while (true) {
            vector<int> a(n);
            cin >> a[0];
            if (a[0] == 0)
                break;
            for (int i = 1; i < n; i++) {
                cin >> a[i];
            }

            pilha p;
            create(&p);
            int prox = 1;
            bool ok = true;

            for (int i = 0; i < n; i++) {
                while (prox <= a[i]) {
                    push(&p, prox);
                    prox++;
                }
                if (topo(p) == a[i]) {
                    pop(&p, &lixo);
                } else {
                    ok = false;
                    break;
                }
            }

            while (!isEmpty(p))
                pop(&p, &lixo);

            if (ok) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
        cout << "\n";
    }
    return 0;
}
