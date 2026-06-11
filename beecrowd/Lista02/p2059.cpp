// problems: 2059 - Ímpar, Par ou Roubo

#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, j1, j2, r, a, resultado;

    cin >> p >> j1 >> j2 >> r >> a;

    if (r != a) {
        cout << "Jogador 1 ganha!" << endl;
        return 0;
    }

    if (r == 1 && a == 1) {
        cout << "Jogador 2 ganha!" << endl;
        return 0;
    }

    resultado = (j1 + j2) % 2;

    if (resultado != p) {
        cout << "Jogador 1 ganha!" << endl;
        return 0;
    }

    cout << "Jogador 2 ganha!" << endl;
    return 0;
}
