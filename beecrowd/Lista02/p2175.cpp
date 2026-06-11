// problems: 2175 - Qual o Mais Rápido?

#include <bits/stdc++.h>
using namespace std;

int main() {
    double o, b, i;

    cin >> o >> b >> i;

    if (o == b || o == i || b == i) {
        cout << "Empate" << endl;
    } else if (o < b && o < i) {
        cout << "Otavio" << endl;
    } else if (b < o && b < i) {
        cout << "Bruno" << endl;
    } else if (i < o && i < b) {
        cout << "Ian" << endl;
    }

    return 0;
}
