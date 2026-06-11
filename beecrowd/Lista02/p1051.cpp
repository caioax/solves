// problem: 1051 - Imposto de Renda

#include <bits/stdc++.h>
using namespace std;

int main() {
    double v, i = 0;

    cin >> v;
    cout << fixed << setprecision(2);

    if (v <= 2000) {
        cout << "Isento" << endl;
        return 0;
    }

    v -= 2000;

    if (v <= 1000) {
        i = v * 0.08;
        cout << "R$ " << i << endl;
        return 0;
    }

    i += 1000 * 0.08;
    v -= 1000;

    if (v <= 1500) {
        i += v * 0.18;
        cout << "R$ " << i << endl;
        return 0;
    }

    i += 1500 * 0.18;
    v -= 1500;

    if (v > 0) {
        i += v * 0.28;
        cout << "R$ " << i << endl;
        return 0;
    }

    cout << "R$ " << i << endl;

    return 0;
}
