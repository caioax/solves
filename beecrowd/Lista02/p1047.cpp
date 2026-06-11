// problem: 1047 - Tempo de Jogo com Minutos

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2, hf, mf, diferenca;

    cin >> h1 >> m1 >> h2 >> m2;

    if (h2 <= h1 && m2 <= m1) {
        h2 += 24;
    }

    h1 *= 60;
    h2 *= 60;

    diferenca = (h2 + m2) - (h1 + m1);

    hf = diferenca / 60;
    mf = diferenca % 60;

    cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)"
         << endl;
    return 0;
}
