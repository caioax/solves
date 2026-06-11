// problem: 1607 - Avance as Letras

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        int r = 0;
        cin >> a >> b;

        for (int i = 0; i < (int)a.size(); i++) {
            int lmax = max(a[i], b[i]), lmin = min(a[i], b[i]);
            int distancia = lmax - lmin;

            if (a[i] > b[i]) {
                r += 26 - distancia;
            } else {
                r += distancia;
            }
        }
        cout << r << "\n";
    }

    return 0;
}
