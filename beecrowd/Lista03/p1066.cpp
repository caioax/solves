// problem: 1066 - Pares, Ímpares, Positivos e Negativos

#include <bits/stdc++.h>
using namespace std;
int p, i, ps, ng;

int main() {
    for (int j = 0; j < 5; j++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            p++;
        } else {
            i++;
        }

        if (x > 0) {
            ps++;
        } else if (x < 0) {
            ng++;
        }
    }

    cout << p << " valor(es) par(es)" << endl;
    cout << i << " valor(es) impar(es)" << endl;
    cout << ps << " valor(es) positivo(s)" << endl;
    cout << ng << " valor(es) negativo(s)" << endl;

    return 0;
}
