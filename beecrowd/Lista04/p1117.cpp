// problem: 1117 - Validação de Nota

#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, s = 0;
    int index = 0;
    cout << fixed << setprecision(2);

    while (cin >> x) {
        if (x < 0 || x > 10) {
            cout << "nota invalida" << endl;
            continue;
        }
        index++;
        s += x;
        if (index >= 2) {
            cout << "media = " << (s / 2) << endl;
            return 0;
        }
    }

    return 0;
}
