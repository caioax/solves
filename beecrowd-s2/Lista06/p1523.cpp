#include "pilha.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    while (cin >> n >> k && n && k) {
        int t = 1;
        bool fail = false;
        pilha p;
        create(&p);

        while (n--) {
            int c, s;
            cin >> c >> s;

            if (fail)
                continue;

            for (; true; t++) {
                int ls = 0;
                if (!isEmpty(p)) {
                    ls = topo(p);
                }

                if (t == ls) {
                    pop(&p, &ls);
                }

                if (t == c) {
                    if (contaNos(p) >= k) {
                        fail = true;
                    } else {
                        push(&p, s);
                    }
                    break;
                }
            }
        }

        for (; !isEmpty(p); t++) {
            int ls = topo(p);
            if (ls < t) {
                fail = true;
                break;
            }

            if (t == ls) {
                pop(&p, &ls);
            }
        }

        if (fail) {
            cout << "Nao\n";
        } else {
            cout << "Sim\n";
        }
    }

    return 0;
}
