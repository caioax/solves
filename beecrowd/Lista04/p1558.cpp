// problem: 1558 - Soma de Dois Quadrados

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;

    while (cin >> a) {
        bool s = false;
        for (int i = 0; i * i <= a; i++) {
            int b = i * i;
            int d = abs(a - b);
            int q = sqrt(d);

            if (q * q == d) {
                cout << "YES" << "\n";
                s = true;
                break;
            }
        }
        if (s) continue;
        cout << "NO" << "\n";
    }

    return 0;
}
