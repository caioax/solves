#include "fila.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        fila f;
        create(&f);
        for (int i = 0; i < n; i++) {
            insert(&f, i + 1);
        }

        cout << "Discarded cards: ";
        bool first = true;
        while (contaNos(f) > 1) {
            int i, ni;
            remove(&f, &i);
            if (!first)
                cout << ", ";
            first = false;
            cout << i;

            remove(&f, &ni);
            insert(&f, ni);
        }
        cout << "\n";
        int r;
        remove(&f, &r);
        cout << "Remaining card: " << r << "\n";
    }

    return 0;
}
