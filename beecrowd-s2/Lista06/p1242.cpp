#include "pilha.h"
#include <bits/stdc++.h>
using namespace std;

bool liga(char a, char b) {
    return (a == 'B' && b == 'S') || (a == 'S' && b == 'B') || (a == 'C' && b == 'F') ||
           (a == 'F' && b == 'C');
}

int main() {
    int n;

    string s;
    while (cin >> s) {
        pilha p;
        create(&p);
        int q = 0;

        for (char x : s) {
            if (!isEmpty(p) && liga(topo(p), x)) {
                pop(&p, &n);
                q++;
            } else {
                push(&p, x);
            }
        }

        while (!isEmpty(p))
            pop(&p, &n);

        cout << q << "\n";
    }
    return 0;
}
