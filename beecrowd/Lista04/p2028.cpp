// problem: 2028 - Sequência de Sequência

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    int c = 1;
    while (cin >> n) {
        int q = ((n + 1) * n) / 2 + 1;
        string numeros = q > 1 ? "numeros" : "numero";
        cout << "Caso " << c << ": " << q << " " << numeros << "\n";

        cout << "0";
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << " " << i;
            }
        }
        cout << "\n" << "\n";

        c++;
    }

    return 0;
}
