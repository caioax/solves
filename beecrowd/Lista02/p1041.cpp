// problem: 1041 - Coordenadas de um Ponto

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x, y;

    cin >> x >> y;

    if (x == 0.0 && y == 0.0) {
        cout << "Origem" << endl;
        return 0;
    }
    if (x == 0.0) {
        cout << "Eixo Y" << endl;
        return 0;
    }
    if (y == 0.0) {
        cout << "Eixo X" << endl;
        return 0;
    }
    if (x > 0) {
        if (y > 0) {
            cout << "Q1" << endl;
            return 0;
        }
        cout << "Q4" << endl;
        return 0;
    } else {
        if (y > 0) {
            cout << "Q2" << endl;
            return 0;
        }
        cout << "Q3" << endl;
        return 0;
    }

    return 0;
}
