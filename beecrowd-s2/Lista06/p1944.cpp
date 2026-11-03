#include "pilha.h"
#include <bits/stdc++.h>
using namespace std;

void face(pilha *p) {
    push(p, 'F');
    push(p, 'A');
    push(p, 'C');
    push(p, 'E');
}

int main() {
    int n;

    while (cin >> n && n) {
        pilha p;
        create(&p);
        face(&p);
        int q = 0;

        while (n--) {
            char x[4];
            int t[4];
            for (int i = 0; i < 4; i++) {
                cin >> x[i];
            }
            for (int i = 0; i < 4; i++) {
                pop(&p, &t[i]);
            }

            if (x[0] == t[0] && x[1] == t[1] && x[2] == t[2] && x[3] == t[3]) {
                q++;
                if (isEmpty(p))
                    face(&p);
            } else {
                for (int i = 3; i >= 0; i--) {
                    push(&p, t[i]);
                }
                for (int i = 0; i < 4; i++) {
                    push(&p, x[i]);
                }
            }
        }

        int lixo;
        while (!isEmpty(p))
            pop(&p, &lixo);

        cout << q << "\n";
    }
    return 0;
}
