// problem: 2154 - Derivada de Polinômios

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    while (cin >> t) {
        while (t--) {
            char l;
            int c, e;
            cin >> c >> l >> e;
            string p = e - 1 == 1 ? "" : to_string(e - 1);
            if (t) cin >> l;

            cout << c * e << "x" << p;
            if (t) cout << " + ";
        }
        cout << "\n";
    }

    return 0;
}
