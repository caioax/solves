// problem: 1870 - Ventiladores e Balões

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, c, p;

    while (cin >> l >> c >> p && (l || c || p)) {
        p--;
        int x, y;
        bool boom = false;
        for (int i = 0; i < l; i++) {
            vector<int> linha(c);
            int v1 = 0, v2 = 0, pv1 = 0, pv2 = c - 1, d;
            for (int j = 0; j < c; j++) {
                cin >> linha[j];

                if (j < p && linha[j]) {
                    v1 = linha[j];
                    pv1 = j;
                } else if (j > p && linha[j] && !v2) {
                    v2 = linha[j];
                    pv2 = j;
                }
            }

            if (boom) continue;
            d = v1 - v2;
            p += d;

            if (p <= pv1) {
                y = pv1 + 1;
                boom = true;
            } else if (p >= pv2) {
                y = pv2 + 1;
                boom = true;
            }
            x = i + 1;
        }
        if (boom) {
            cout << "BOOM " << x << " " << y << "\n";
        } else {
            cout << "OUT " << p + 1 << "\n";
        }
    }
    return 0;
}
