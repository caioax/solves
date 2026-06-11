// problems: 2313 - Qual Triângulo

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> l(3);
    cin >> l[0] >> l[1] >> l[2];

    sort(l.begin(), l.end());

    if (l[2] >= (l[0] + l[1])) {
        cout << "Invalido" << endl;
        return 0;
    }

    if (l[0] == l[1] && l[0] == l[2]) {
        cout << "Valido-Equilatero" << endl;
    } else if ((l[0] == l[1]) || (l[0] == l[2]) || (l[1] == l[2])) {
        cout << "Valido-Isoceles" << endl;
    } else {
        cout << "Valido-Escaleno" << endl;
    }

    int h = l[2] * l[2];
    int c = l[0] * l[0] + l[1] * l[1];

    if (h == c) {
        cout << "Retangulo: S" << endl;
    } else {
        cout << "Retangulo: N" << endl;
    }

    return 0;
}
