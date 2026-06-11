// problem: 1103 - Alarme Despertador

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;

    while (cin >> h1 >> m1 >> h2 >> m2) {
        if (!h1 && !m1 && !h2 && !m2) return 0;
        int d = (h2 * 60 + m2) - (h1 * 60 + m1);
        if (d < 0) d += 1440;
        cout << d << endl;
    }

    return 0;
}
